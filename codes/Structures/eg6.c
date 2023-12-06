#include<stdio.h>
#include<math.h>

struct Coordinate {
    int x;
    int y;
};

float getDistance(struct Coordinate *X, struct Coordinate *Y) {
    int x_diff = X->x - Y->x;
    int y_diff = X->y - Y->y;
    
    float distance = sqrt((x_diff * x_diff) + (y_diff * y_diff));
    
    return distance;
}

int main() {
    struct Coordinate a,b;
    
    a.x = 10, a.y = 6;
    b.x = 10, b.y = 7;
    
    float distance = getDistance(&a, &b);
    printf("Distance between points (%d, %d) and (%d, %d) = %.3f", a.x, a.y, b.x, b.y, distance);
    
    return 0;
}
