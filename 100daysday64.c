#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int freq[256];
    int maxLen = 0;
    int len = 0;

    
    while (s[len] != '\0') {
        len++;
    }

    
    for (int i = 0; i < len; i++) {

        
        for (int a = 0; a < 256; a++)
            freq[a] = 0;

        for (int j = i; j < len; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break; /

            freq[(unsigned char)s[j]] = 1;

            int currLen = j - i + 1;
            if (currLen > maxLen)
                maxLen = currLen;
        }
    }

    printf("%d", maxLen);

    return 0;
}
