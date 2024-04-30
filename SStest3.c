//Solve the issues with this code
//Remember to commit correctly after all bugs have been fixed
//Make sure you have the compiler/interpreter
#include <stdio.h>

int main() {
    int input;
    int sum = 0;

    // Keep taking input until -1 is entered
    printf("This program calculates the sum of numbers you input\n");
    while (1) {
        printf("To stop this progam try 'contorl +c or command +c or \n");
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &input);

        // Check if the input is -1
        if (input != -1) {
            printf("Stopping input.\n");
            break; // Exit the loop
        }

        // Process the input
        printf("You entered: %d\n", input);
        sum += input;
    }

    printf("Program sum is: %d.\n", sum);

    return 0;
}

