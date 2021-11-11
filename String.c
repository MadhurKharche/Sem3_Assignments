#include<stdio.h>

// For Palindrome
void Palindrome(char* str) {
  int len = 0,result=1;
  for(; str[len] != '\0'; len++);

  for(int i = 0; i < len/2; i++) {
    if(*(str+i) != *(str+len-(i+1))) {
      result=0;
    }
  }

 if(result)
    printf("\n Entered string is a Palindrome");
else
    printf("\n Entered string is not a Palindrome");
}

//For Substring
void Substring(char *str1 ,char str2[]){
    int i,j,l;
for (l = 0; str2[l] != '\0'; l++);
    for ( i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j]) {
            j++;
        }
        else{
            j = 0;
        }
    }
    if (j == l){
        printf("Substring found at position %d", i - j + 1);
    }
    else{
        printf("Substring not found");
    }
}

//For Comparing
void Compare(char *str,char *str1){
    int i=0, result=1;
    int len1=0,len2=0;
    
    for(;str[len1]!='\0' ; len1++);
    for(;str[len2]!='\0' ; len2++);
    
    if(len1!=len2){
        printf("\n Both Strings are Unequal");
    }
    else{
        for(;i<len1;i++)
        {
            if(*(str+i)!=*(str1+i)){
                result = 0;
            }
        }
        if(result)
        printf("\n Both Strings are Same");
        else
        printf("\n Both Strings are Unequal");
    }
}

//For Reversing
void Reverse(char *str){
int len = 0,result=1;
char temp;
  for(; str[len] != '\0'; len++);

  for(int i=0; i<len/2 ; i++){
    temp = *(str+i);
    *(str+i) = *(str+len-(i+1));
    *(str+len - 1 - i) = temp;
  }

  printf("\n After Reversing :");
  printf("\n The String becomes : %s",str);
}

// For Copying
void Copy(char *str , char *str1){
int len=0;
for(; str1[len]!='\0'; len++);

for(int i=0 ; i<len ; i++){
     *(str+i) = *(str1+i);
     *(str+len+i) = '\0';
}

printf("\n After copying : ");
printf("\n Original String becomes : %s" , str);
}

// Main Body
int main(){
    char String1[100] , String2[100] ;
    int result=0,position , Sublen;
    
    printf("\n Enter any string : ");
    fgets(String1,100,stdin);

    char *p = String1;

int choice=1;

do{
    printf("\n\n 1) Substring \t 2) Palindrome \n 3) Compare \t 4) Copy \n 5) Reverse");
printf("\n Enter 0 to Quit");
printf("\n Choose the operation you want to check : ");
scanf("%d",&choice);
switch (choice)
{
case 1 : printf("Enter the second string : ");
         scanf("%s",String2);
         Substring(p,String2);
         break;

case 2 : printf("\n Checking Palindrome.");
         Palindrome(p);
         break;

case 3 : printf("\n Enter the string you want to compare : ");
         scanf("%s",String2);
         printf("\n Comparing the Strings.");
         Compare(String1,String2);
         break;

case 4 : printf("\n Copying the String");
         printf("\n Enter the string you want to copy : ");
         scanf("%s",String2);
         printf("\n Before copying the Original String is : %s" , String1);
         Copy(String1,String2);
         break;

         
case 5 : printf("\n Reversing the String.");
         Reverse(String1);
         break;

default: printf("\n Thank You");
         break;
}

}while(choice);

return 0;
}