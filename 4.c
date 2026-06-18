//WAP to accpet base & height and calculate the area for triangle//

#include<stdio.h>
    int main()
    {
        float base,height,area;

        printf("Enter Base:");
        scanf("%f",&base);
        printf("Enter Height:");
        scanf("%f",&height);

        area=0.5*base*height;

        printf("Area of Triangle=%.2f",area);
        
        return 0;
    }