program3b:
#include<stdio.h>

int main(){
	int n,f1=0,f2=1,f=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	if(n==1) printf("The first fibbanocci number is %d",f1);
	else if(n==2) printf("The first 2 fibbanocci number are %d %d",f1,f2);
	else if (n>2){
		printf("The first %d fibbanocci number are %d, %d, ",n,f1,f2);
		do{
			f=f1+f2;
			printf("%d, ",f);
			f1=f2;f2=f;
			n--;
		}while(n>2);

	}
	printf("\n");
}
Enter n value: 7
The first 7 fibbanocci number are 0, 1, 1, 2, 3, 5, 8,

--------------------------------
Process exited after 3.901 seconds with return value 0
Press any key to continue . . .








