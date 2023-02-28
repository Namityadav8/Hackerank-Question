/*write a program to find whether the no. entered by user is smallest or greater out of two var */

#include<stdio.h>

int main(){
    int a,b;
    printf("enter value of a\n");
    scanf("%d",&a);

    printf("enter the value of b\n");
    scanf("%d",&b);

    printf("the value of a is %d and b is %d \n",  a,b );
    if(a>b){
        printf("a is greater then b");
    }
    else{
        printf("b is greater then a");
    }
    return 0;
}



