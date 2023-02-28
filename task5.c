// /*write a program to find whether the entered no. is less than or grater then the other value */

// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter the value of a\n ");
//     scanf("%d",&a);
//     printf("Enter the value of b\n ");
//     scanf("%d",&b);
//     if(a>b){
//         printf("a is  greater then b");

//     }
//     else{
//         printf("a is less then b");
//     }
//     return 0;
// }
#include<stdio.h>

int main(){
    int v;
    printf("Enter  your number\n");
    scanf("%d",&v);
    if(v<10){
        printf("number is less then 10");
}
else if(v<100){
    printf("number is less than 100");
}
    return 0;
}