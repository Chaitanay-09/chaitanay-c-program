#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    enum TrafficLight signal;

    scanf("%s", input);

    if (strcmp(input, "RED") == 0) {
        signal = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        signal = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        signal = GREEN;
    } else {
        
        return 0;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
