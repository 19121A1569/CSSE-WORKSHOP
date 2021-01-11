program7b:
#include<stdio.h>
#include <math.h>
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main(){
    int a,b;
    printf("Enter a and b value seperated by comma: ");
    scanf("%d,%d",&a,&b);
    printf("Before swapping a and b values are %d,%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a and b values are %d,%d",a,b);
    return 0;
}
Enter a and b value seperated by comma: 7,3
Before swapping a and b values are 7,3
After swapping a and b values are 3,7
--------------------------------
Process exited after 5.472 seconds with return value 0
Press any key to continue . . .





