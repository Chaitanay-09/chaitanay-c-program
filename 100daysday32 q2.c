#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0}; 
    int maxFreq = 0, mostFreqDigit = 0;

    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("%d\n", mostFreqDigit);

    return 0;
}
