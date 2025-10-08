#include<stdio.h>
int main()
{
    int area,perimeter,height,width;
    scanf("%d %d",&height,&width);
    perimeter=2*(height+width);
    printf("Perimeter of the rectangle = %d inches\n",perimeter);
    area=height*width;
    printf("Area of the rectangle= %d square inches\n",area);
}
