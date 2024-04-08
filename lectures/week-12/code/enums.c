#include <stdio.h>

enum Direction 
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

int main() 
{
    enum Direction dir = LEFT;

    switch (dir) {
        case UP:
            printf("Moving up\n");
            break;
        case DOWN:
            printf("Moving down\n");
            break;
        case LEFT:
            printf("Moving left\n");
            break;
        case RIGHT:
            printf("Moving right\n");
            break;
        default:
            printf("Invalid direction\n");
    }
    return 0;
}