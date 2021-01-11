

#include<stdio.h>

void call_by_value(int x,int y){
	int temp=x;
	
	x=y;
	y=temp;
}

void call_by_refernce(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a,b;
	printf("Enter a and b values seperated by space: ");
	scanf("%d %d",&a,&b);
	
	printf("a and b values before using call by value method a=%d and b=%d\n\n",a,b );
	call_by_value(a,b);
	printf("a and b values after using call by value method a=%d and b=%d\n\n\n",a,b );
	printf("a and b values before using call by refernce method a=%d and b=%d\n\n",a,b );
	call_by_refernce(&a,&b);
	printf("a and b values after using call by refernce method a=%d and b=%d\n",a,b );
	return 0;
}
Enter a and b values seperated by space: 7 3
a and b values before using call by value method a=7 and b=3

a and b values after using call by value method a=7 and b=3


a and b values before using call by refernce method a=7 and b=3

a and b values after using call by refernce method a=3 and b=7

--------------------------------
Process exited after 4.579 seconds with return value 0
Press any key to continue . . .




