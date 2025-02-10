//
// Created by Aishani on 10-02-2025.
//
/*Program to find the area of a circle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float r;
    //clrscr();
    printf("Enter the radius \nof the circle: ");
    scanf("%f",&r);
    float area = 3.14 * r * r;
    printf("Area of the circle = %f",area);
    //getch();
}