#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for ascending order
int compareAsc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Comparator function for descending order
int compareDesc(const void *a, const void *b) {
    return strcmp(*(const char **)b, *(const char **)a);
}

int main() {
    const char *names[] = {"John", "Alice", "Bob"};
    int size = sizeof(names) / sizeof(names[0]);

    // Sort in ascending order
    qsort(names, size, sizeof(const char *), compareAsc);
    printf("Ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", names[i]);
    }
    printf("\n");

    // Sort in descending order
    qsort(names, size, sizeof(const char *), compareDesc);
    printf("Descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", names[i]);
    }
    printf("\n");

    return 0;
}
