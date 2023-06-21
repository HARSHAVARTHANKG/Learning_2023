#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLowerCase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void capitalizeFirstLetter(char *str) {
    int isFirstChar = 1;
    while (*str) {
        if (isFirstChar && isalpha((unsigned char)*str)) {
            *str = toupper((unsigned char)*str);
            isFirstChar = 0;
        } else if (!isalpha((unsigned char)*str)) {
            isFirstChar = 1;
        }
        str++;
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char line[1000];

    printf("Enter the option (u/l/s): ");
    char option;
    scanf(" %c", &option);

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Failed to open the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        switch (option) {
            case 'u':
                convertToUpperCase(line);
                break;
            case 'l':
                convertToLowerCase(line);
                break;
            case 's':
                capitalizeFirstLetter(line);
                break;
            default:
                break;
        }

        fputs(line, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
