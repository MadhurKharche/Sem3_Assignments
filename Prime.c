#include<stdio.h>

void Prime(int START , int END){
int count;
for(int i=START ; i<=END ; i++){
    if(i==0 || i==1){continue;}
    count=0;
    for(int j=2 ; j<=i/2 ;j++){
        if(i%j==0){
            count=0;
            break;
        }
        else
        count++;
    }
if(count!=0)
printf("\n%d",i);
}
}

int main(){
    int n1,n2;
    printf("\n Enter START number : ");
    scanf("%d",&n1);
    printf("\n Enter END number : ");
    scanf("%d",&n2);
    Prime(n1,n2);
    return 0;
}

