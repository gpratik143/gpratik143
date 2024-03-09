#include <stdio.h>
#include <string.h>

int strend() {
    char s[100], t[20], c[20];
    int i, k = 0, len1, len2;

    printf("\nEnter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  
    printf("Enter the string to be searched for: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0'; 

    len1 = strlen(s);
    len2 = strlen(t);

    for (i = len1 - len2; i < len1; i++) {
        c[k++] = s[i];
    }
    c[k] = '\0';

    if (strcmp(t, c) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    if (strend()) {
        printf("\nString found at the end of the original string.\n");
    } else {
        printf("\nString not found at the end of the original string.\n");
    }

    return 0;
}
