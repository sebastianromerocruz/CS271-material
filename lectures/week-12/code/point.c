#include <stdio.h>
#include <math.h>  // for sqrt and pow

struct Point 
{
    int x;
    int y;
};

int main() 
{
    struct Point p1 = {2, 3};
    struct Point p2 = {5, 7};

    // Calculate the distance between p1 and p2 using the Pythagorean theorem
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("The distance between p1 (%d, %d) and p2 (%d, %d) is %.2f units.\n", 
           p1.x, p1.y, 
           p2.x, p2.y, 
           distance);

    return 0;
}