#include <stdio.h>
#define PI 3.1416
#define circleArea(r) (PI * r *r)


int main()
{
    float area,r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = circleArea(r);
    printf("Area of circle is %.2f\n", area);
    return 0;
}
