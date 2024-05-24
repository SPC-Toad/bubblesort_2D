#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_WORDS 100

void bubble_sort(char arr[][MAX], int word) {
    int i, j;
    char temp[MAX];
    for (i = 0; i < word - 1; i++) {
        for (j = 0; j < word - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char arr[MAX_WORDS][MAX];
    int word_count = 0;
    char input[MAX];

    printf("Type your data separated by newline (end input with an empty line):\n");

    while (1) {
        fgets(input, MAX, stdin);

        // Remove newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Check for termination condition (empty line)
        if (strlen(input) == 0) {
            break;
        }

        strcpy(arr[word_count], input);
        word_count++;
    }

    bubble_sort(arr, word_count);

    printf("\nSorted words:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
