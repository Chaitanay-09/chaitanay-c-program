#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");  

    if (fp == NULL) {
        printf("File not found or cannot be opened.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
    
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

    
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
