#define _CRT_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>

unsigned largest = 0;

void setLargest(unsigned int u)
{
    if (largest < u)
    {
        largest = u;
    }
}

void printLargest()
{
    printf("%d \n", largest);
}