#include <stdio.h>

int greater(int a, int b, int c){
    if(a>=b){
        if(a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main() {
    int a,b,c;
    
    printf("Enter the First number :");
    scanf("%d",&a);
    printf("Enter the Second number :");
    scanf("%d",&b);
    printf("Enter the Third number :");
    scanf("%d",&c);
    
    int result=greater(a,b,c);
    printf("The greater number is :%d",result);
    return 0;
}