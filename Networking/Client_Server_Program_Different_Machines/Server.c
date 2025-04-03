// Server.c it has to keep one machine and client has to be in another Machine

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len;
    char buffer[1024];

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // Initialize server address structure
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(PORT);

    // Bind socket
    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("bind");
        exit(EXIT_FAILURE);
    }

    // Listen for connections
    if (listen(server_socket, 5) == -1) {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port: %d\n", PORT);

    // Accept connection
    client_addr_len = sizeof(client_addr);
    client_socket = accept(server_socket, (struct sockaddr *)&client_addr, &client_addr_len);
    if (client_socket == -1) {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    printf("Connection accepted\n");

    // Receive message from client
    ssize_t bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
    if (bytes_received == -1) {
        perror("recv");
        exit(EXIT_FAILURE);
    }
    buffer[bytes_received] = '\0';
    printf("Received message from client: %s\n", buffer);

    // Send message to client
    char message[100];
    printf("Enter The Message from Server Side\n");
    scanf("%[^\n]",message);
    if (send(client_socket, message, strlen(message), 0) == -1) {
        perror("send");
        exit(EXIT_FAILURE);
    }
    printf("Message has sent to client\n");

    // Close sockets
    close(client_socket);
    close(server_socket);

    return 0;
}