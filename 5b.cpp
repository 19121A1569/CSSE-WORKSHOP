program5b:

#include <stdio.h>
#include <string.h>
int rev(char a[]){
	/*char b[100];
	strcpy(b,a);
	strrev(b);
	return (strcmp(b,a)==0)? 1:0;*/
	int n=strlen(a);
	for(int i=0;i<n/2;i++)
		if(a[i]!=a[n-i-1])
            return 0;
	return 1;
}

int main(){
	char s[100];
	printf("Enter a string: ");
	gets(s);
	printf("%s is %s\n\n",s,(rev(s)==1)? "a palindrome":"not a palindrome");
	return 0;
}
Enter a string: geetha
geetha is not a palindrome


--------------------------------
Process exited after 7.464 seconds with return value 0
Press any key to continue . . .







