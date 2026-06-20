#include <stdio.h>
#include <string.h>

int main() {

    char line[1000], c;

    printf("Input the sentence to be converted:\n");
    scanf("%[^\n]", line);

    printf("Type U for uppercase and L for lowercase:\n");
    scanf(" %c", &c);

    switch (c) {

        case 'U':

            for (int i = 0; line[i] != '\0'; i++) {
                if (line[i] >= 'a' && line[i] <= 'z') {
                    line[i] -= 32;
                }
            }

            printf("Converted line:\n%s\n", line);
            break;

        case 'L':

            for (int i = 0; line[i] != '\0'; i++) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    line[i] += 32;
                }
            }

            printf("Converted line:\n%s\n", line);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}