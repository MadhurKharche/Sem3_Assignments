#include<stdio.h>

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
    printf("%d , ",c[p]);
}

printf("}");
}


//  void Intersection(int a[],int sizeA,int b[],int sizeB,int c[]){
//  int ctr;
//  for(int a=0; a<sizeA+sizeB ; a++){
//             c[a]=0;
//  }
//      for(int i=0; i<sizeA ; i++){
//         ctr=1;
//          for(int j=0; j<sizeB ; j++){
//             if(a[i]==b[j]){
//                 ctr=1;
//                 break;
//             }
//          }
//          if(ctr==0){
//              c[ctr] = a[i];
//              ctr++;
//          }
//      }

//      printf("\n\n Intersection of the 2 sets is : {");
// for(int p=0 ; p<ctr; p++){
//     printf("%d , ",c[p]);
// }
// printf("}");
// } 
// void Diffeence(int a[],int b[],int c[]);
// void Symmetric(int a[],int b[],int c[]);
void Intersection(int s1[],int m,int s2[],int n,int s3[])
{
	int i,j,f,k=0;
	for(i=0;i<m+n;i++)
	{
		s3[i]=0;
	}
	for(i=0;i<n;i++)
	{
		f=1;
		for(j=0;j<n;j++)
		{
			if(s1[i]==s2[j])
			{
				f=0;
				break;
			}
		}

	if(f==0)
	{
		s3[k]=s1[i];
		k++;
	}
	}
         printf("\n\n Intersection of the 2 sets is : {");
for(int p=0 ; p<k; p++){
    printf("%d , ",s3[p]);
}
printf("}");
}


int main(){
    int Arr1[20],Arr2[20],Res[40];
unsigned int choice;

int l1,l2;
    printf("\nEnter number of elements in set A : ");
    scanf("%d",&l1);
    printf("\n Enter elements of set A : {");
            for(int i=0; i<l1;i++){
                scanf("%d",&Arr1[i]);
            }
    printf("}");
    printf("\nEnter number of elements in second set : ");
    scanf("%d",&l2);
    printf("\n Enter elements of set B: {");
            for(int i=0; i<l2;i++){
            scanf("%d",&Arr2[i]);
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

// case 3: Diffeence(Arr1,Arr2,Res);
//           break;

// case 4: Symmetric(Arr1,Arr2,Res);
//           break;

case 5: printf("\n Thank You!");
          break;
default: printf("Enter a valid choice!");
      break;
  }
  }while(choice!=5);

    return 0;
}

