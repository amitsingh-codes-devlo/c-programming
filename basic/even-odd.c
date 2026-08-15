#include<stdio.h>
// if the value is even it will return 1 else return 0 for odd:
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);

    printf("the number is: %d ", a%2==0);
}
