/* Name : Madhur Ajay Kharche
   Roll No : SYITA155
   Assignment 1 : Represent sets using one-dimensional arrays and implement functions to perform
i. Union
ii. Intersection
iii. Difference
iv. Symmetric difference of two sets */

#include<stdio.h>

// Union
void Union(int a[],int sizeA,int b[],int sizeB, int c[]){
    
    int resctr=0;
    
    for(int i=0; i<sizeA ; i++){
        c[resctr]=a[i];
        resctr++;
    }

    for(int j=0; j<sizeB; j++){
        int flag=1;
        for(int g=0; g<sizeA ;g++){
            if(b[j]==a[g]){
                flag=0;
                break;
            }
        }
    if(flag){
            c[resctr] = b[j];
            resctr++;
    }
}

    printf("\n\nUnion of the entered sets is : {");
for(int p=0 ; p<resctr; p++){
    printf("%d",c[p]);
    if(p<resctr-1){
        printf(", ");
    }
}
printf("}");
}

// Intersection
 void Intersection(int a[],int sizeA,int b[],int sizeB,int c[]){
 int ctr=0,flag;
 for(int a=0; a<sizeA+sizeB ; a++){
            c[a]=0;
 }
     for(int i=0; i<sizeA ; i++){
        flag=0;
         for(int j=0; j<sizeB ; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
         }
         if(flag){
             c[ctr] = a[i];
             ctr++;
         }
     }

printf("\n\n Intersection of the 2 sets is : {");
for(int p=0 ; p<ctr; p++){
    printf("%d",c[p]);
    if(p<ctr-1)
    printf(", ");
}
printf("}");
} 

// Difference
void Difference(int a[],int size1,int b[],int size2,int c[]){
int ctr=0,flag;

 for(int a=0; a<size1+size2 ; a++){
            c[a]=0;
 }

for(int i=0; i<size1 ; i++){
    flag=1;
    for(int j=0; j<size2 ; j++){
        if(a[i]==b[j]){
            flag=0;
            break;
        }
    }

    if(flag){
        c[ctr] = a[i];
        ctr++;
    }
}
printf("{");
for(int h=0; h<ctr; h++){
    printf("%d",c[h]);
    if(h<ctr-1){
        printf(", ");
    }
}
printf("}");
}

// Symmetric Difference
void Symmetric_Difference(int a[],int sizeA,int b[],int sizeB,int c[]){
     int ctr=0;
     for(int a=0; a<sizeA+sizeB ; a++){
            c[a]=0;
     }

for(int i=0; i<sizeA ; i++){
    int flag=0;
    for(int j=0; j<sizeB ; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
    }
    if(flag==0){
        c[ctr] = a[i];
        ctr++;
    }
}

for(int i=0; i<sizeB; i++){
 int flag=0;
    for(int j=0; j<sizeA ; j++){
        if(b[i]==a[j]){
            flag=1;
            break;
        }
    }
        if(flag==0){
        c[ctr] = b[i];
        ctr++;
        }
}

printf("\n Symmetric Difference is : {");
for(int i=0; i<ctr ; i++){
    printf("%d",c[i]);

    if(i<ctr-1){
        printf(", ");
    }
}
printf("}");
}

int main(){

int Arr1[20],Arr2[20],Res[40];
unsigned int choice ,difference;
        
int l1,l2;
    printf("\nEnter number of elements in set A : ");
    scanf("%d",&l1);
    printf("\n Enter elements of set A :");
    int ctr=1;
            for(int i=0; i<l1;i++){
                printf("\n Enter element %d : ",ctr);
                scanf("%d",&Arr1[i]);
                ctr++;
            }
    
    ctr=0;
    printf("\nEnter number of elements in second set : ");
    scanf("%d",&l2);
    printf("\n Enter elements of set B:");
            for(int i=0; i<l2;i++){
            printf("\n Enter element %d : ",ctr+1);
            scanf("%d",&Arr2[i]);
            }

printf("\n Set A is {");
for(int i=0; i<l1 ; i++){
    printf("%d",Arr1[i]);
    if(i<l1-1){
        printf(", ");
    }
}
printf("}");

printf("\n Set B is {");
for(int i=0; i<l2 ; i++){
    printf("%d",Arr2[i]);
    if(i<l2-1){
        printf(", ");
    }
}
printf("}");

do{
printf("\n\nChoose Operation from the below menu : ");
printf("\n1) Union \t\t 2) Intersection \n3) Difference \t\t 4) Symmetric\n\t\t 5)Quit \n Your Choice : ");
    scanf("%d",&choice);

switch (choice)
{
case 1: Union(Arr1,l1,Arr2,l2,Res);
        break;

case 2: Intersection(Arr1,l1,Arr2,l2,Res);
        break;

case 3: printf("\n Select which operation you wish to perform : \n 1) A-B \t 2) B-A");
printf("\n Enter your choice : ");
        scanf("%d",&difference);
        if(difference==1){
            printf("\n Elements of set A-B are : ");
            Difference(Arr1,l1,Arr2,l2,Res);
        }
        else{
            printf("\n Elements of B-A are : ");
            Difference(Arr2,l2,Arr1,l1,Res);
        }
        break;

case 4: Symmetric_Difference(Arr1,l1,Arr2,l2,Res);
        break;

case 5: printf("\n Thank You!");
          break;
default: printf("Enter a valid choice!");
      break;
  }
  }while(choice!=5);

    return 0;
}

