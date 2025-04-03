#include <stdio.h>

int main() {
    char a[10], ch;
    int i, p;
    
    // Input elements
    printf("Enter 5 characters:\n");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &a[i]);  // Space before %c to consume newline characters
    }

    // Display elements
    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%c", a[i]);
    }
    printf("\n");

    // Input position and new character
    printf("Enter the position (1-6) where you want to insert a new character: ");
    scanf("%d", &p);
    
    // Ensure valid position
    if (p < 1 || p > 6) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the character to insert: ");
    scanf(" %c", &ch);
    
    // Convert to zero-based index
    p = p - 1;

    // Shift elements to the right
    for (i = 5; i > p; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[p] = ch;

    // Display the updated array
    printf("Updated array: ");
    for (i = 0; i < 6; i++) {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}
