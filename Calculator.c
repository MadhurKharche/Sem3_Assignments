#include<stdio.h>
#include<math.h>
int main()
{
     float n1,n2,div1=1;
    int operation;
 printf("\n Enter your choice number for the operation you want to perform.");
 
 again:
   printf("\n 1) Addition \t \t 2) Subtraction \n 3) Multiplication \t 4) Division");
 
  a:
   printf("\n\n Choice number :");
   scanf("%d" , &operation);

if(operation>4){
  printf("Invalid Choice. Please enter again");
  goto a;
}    

switch(operation)
{
case 1 :  printf("\n Enter the First Number : ");
      scanf("%f" , &n1);

      printf("\n Enter the Second Number :");
      scanf("%f" , &n2);
                  printf("\n %.2f + %.2f = %.3f",n1 ,n2,n1+n2);
                  break;

case 2 : printf("\n Enter the First Number : ");
        scanf("%f" , &n1);

        printf("\n Enter the Second Number :");
        scanf("%f" , &n2);
        if(n1>n2)
            printf("\n The Absolute Difference of the Two numbers is %.3f", n1-n2);
        else 
            printf("\n The Absolute Difference of the Two numbers is %.3f", n2-n1);

        break;

case 3 :   printf("\n Enter the First Number : ");
          scanf("%f" , &n1);

          printf("\n Enter the Second Number :");
          scanf("%f" , &n2);
          printf("\n %.2f*%.2f = %.3f",n1,n2, n1*n2);

         break;

case 4 :  printf("\n Enter the First Number : ");
          scanf("%f" , &n1);

          printf("\n Enter the Second Number :");
          scanf("%f" , &n2);
                
         if(n2==0){
         printf("\n Denominator must be non-zero value.");
         printf("\n Re-enter value of denominator : ");
         scanf("%f",&n2);
         div1=n1/n2;
          printf("\n %.2f / %.2f = %.3f" , n1,n2,div1);
         }
         else{
            div1=n1/n2;
         printf("\n %.2f / %.2f = %.3f" , n1,n2,div1);
         }
         break;

default: printf("\n You have entered an Invalid Case!");
    break;
}

int cont;
  printf("\n\n Do you want to cont using : 1) Yes 2) No");
  printf("\n Enter Choice : ");
  scanf("%d",&cont);
     
      if(cont==1)
      goto again; 

printf("\n\n Thank you ");    
    
    return 0;
}  