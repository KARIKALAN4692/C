// client.c Client Program should be in another machine

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define SERVER_IP "192.168.1.8"  // IP address of the server
#define PORT 12345

int main() {
    int client_socket;
    struct sockaddr_in server_addr;
    char buffer[1024];

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // Initialize server address structure
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);
    server_addr.sin_port = htons(PORT);

    // Connect to server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("connect");
        exit(EXIT_FAILURE);
    }

    printf("Connected to server\n");

    // Send message to server
 
    char message[100];
    printf("Enter The Message from Client Side:\n");
    scanf("%[^\n]",message);
    if (send(client_socket, message, strlen(message), 0) == -1) {
        perror("send");
        exit(EXIT_FAILURE);
    }
    printf("Message has sent to server\n");

    // Receive message from server
    ssize_t bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
    if (bytes_received == -1) {
        perror("recv");
        exit(EXIT_FAILURE);
    }
    buffer[bytes_received] = '\0';
    printf("Received message from server: %s\n", buffer);

    // Close socket
    close(client_socket);

    return 0;
}
