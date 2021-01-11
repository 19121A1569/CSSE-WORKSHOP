program7a:

#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum=0,n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int* p=(int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter number-%d: ",i+1);
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++) sum+=p[i];
    printf("sum of the %d numbers is %d\n",n,sum);
    return 0;
}
Enter n value: 7
Enter number-1: 7
Enter number-2: 3
Enter number-3: 7
Enter number-4: 7
Enter number-5: 3
Enter number-6: 7
Enter number-7: 3
sum of the 7 numbers is 37

--------------------------------
Process exited after 13.51 seconds with return value 0
Press any key to continue . . .










