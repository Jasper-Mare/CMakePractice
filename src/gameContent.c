#include "gameContent.h"

int gameMaths(int a, int b) {
    printf("running game: %i + %i %i", a, b, a + b);
    printf("Alice says: %i", aliceMaths(a));
    return a + b;
}