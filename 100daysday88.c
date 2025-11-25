#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}
