#include<stdio.h>

void lmo(int* ptr){
    printf("The address of the Variable is %p\n",ptr);
    printf("The Value at the Variable is %d\n",*(&ptr));
}

int main(){
    /* 4. Write a function and pass the value by reference */
    int i = 4;
    int* j = &i;
    lmo(j);
    return 0;
}