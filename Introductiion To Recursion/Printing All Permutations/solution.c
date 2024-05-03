#include <stdio.h>
#include <string.h>

void permutations(char *string, char *current, int length) {
    if (strlen(string) == 0) {
        printf("%s\n", current);
    } else {
        for (int i = 0; i < length; i++) {
            char new_string[length];
            strcpy(new_string, string);
            strcat(current, &string[i]);
            strcpy(new_string + i, string + i + 1);
            permutations(new_string, current, length - 1);
        }
    }
}

int main() {
    char input_string[] = "abc";
    char current[10] = "";
    printf("Permutations of '%s' are:\n", input_string);
    permutations(input_string, current, strlen(input_string));
    return 0;
}
