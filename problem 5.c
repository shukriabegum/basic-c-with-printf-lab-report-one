#include<stdio.h>
int main()
{
    float radius,perimeter,area;
    printf("Entera a radius:\n");
    scanf("%f",&radius);
    perimeter=2*3.1416*radius;
    printf("Perimeter of the Circle = %f inches\n",perimeter);
    area=3.1416*radius*radius;
    printf("Area of the Circle= %f squre inches\n",area);
}
