#include <stdio.h>
int checkprimeNumber(int n);
int main() 
{
    int n1,n2,i,c;
    printf("Enter start number : ");
    scanf("%d",&n1);

    printf("Enter end number : ");
    scanf("%d",&n2);
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(i=n1;i<=n2;++i) 
    {
      c=checkprimeNumber(i);
       if(c==1)
      printf("%d\n ",i);
    }
    return 0;
}
int checkprimeNumber(int n)
 {
    int j, c=1;
    for (j=2; j<=n/2; ++j) 
    {
        if (n%j==0) 
        {
          c=0;
          break;
        }
    }
  return c;
}