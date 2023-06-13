//Write a function to find biggest of 2 numbers using - if else
    

#include<stdio.h>
void find_biggest_if_else(int a, int b) {
    if (a > b) {
        printf("%d",a);
    } else {
        printf("%d",b);
    }
}

int main()
{
int a, b;
scanf("%d", &a);
scanf("%d",&b);

find_biggest_if_else(a,b);
return 0;
}
