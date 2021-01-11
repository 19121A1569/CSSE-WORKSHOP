program:program:passed
  
#include<stdio.h>
#include<string.h>
int main(){
		char c[20];
		int sfail=0,grace=0;
		printf("Enter the c obtained: ");
		scanf("%s",c);
		int num=(strcmp(strlwr(c),"first")==0)? 1:(strcmp(strlwr(c),"second")==0)? 2:(strcmp(strlwr(c),"third")==0)? 3:0;
		if(num!=0){
			printf("Enter number of subjects failed: ");
			scanf("%d",&sfail);
		}
		switch(num){
			case 1:
				if(sfail<=3) grace=5;
				break;
			case 2:
				if(sfail<=2) grace=4;
				break;
			case 3:
				if(sfail==1) grace=5;
				break;
			default:
				printf("The c you entered is incorrect\n\n");
			}

		if(grace==0 && num!=0) printf("no grace marks\n\n");
		else if(grace!=0) printf("Grace marks is %d\n\n",grace);
		return 0;
}
Enter the c obtained: first
Enter number of subjects failed: 0
Grace marks is 5


--------------------------------
Process exited after 14.36 seconds with return value 0
Press any key to continue . . .









