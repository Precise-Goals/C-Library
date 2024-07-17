// check number is divisible by 97 or not 
#include<stdio.h>

int main(){
    int a,check;
    printf("Enter the Number: ");
    scanf("%d", &a);

    if(a%97==0){
        printf("Number %d is Divisible by 97\n",a);
    } else {
        printf("Number %d is indivisible by 97\n",a);
    }

    return 0;
}