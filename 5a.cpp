program5a:

#include <stdio.h>
typedef long long int lli;

lli fact(lli f ){
	if(f==1) return 1;
	else return f*fact(f-1);
}

int main(){
	int f;
	printf("\nEnter the number you want to find factorial for: ");
	scanf("%d",&f);
	printf("\nfactorial of %d is %lld\n\n",f,fact(f));
}

Enter the number you want to find factorial for: 7

factorial of 7 is 5040


--------------------------------
Process exited after 6.148 seconds with return value 0
Press any key to continue . . .






