#include<stdio.h>
#include<string.h>
struct cric{
  char name[20];
  int run;
  float average;
  int wicket;
  char country[20];
  int role;
};
char cont[20]; 
void swap(struct cric *xp, struct cric *yp);

int main()
{ int n,key,j;
  printf("Enter Number of Player :  \n");
scanf("%d",&n);
  struct cric player[n];

  //getting info
  for(int i=0;i<n;i++)
  
  { printf("%d player : \n",i+1);
     printf("Enter Name of Player :  \n");
     scanf("%s",player[i].name); 

       printf("Enter country of Player :  \n");
     scanf("%s",player[i].country);
    
    printf("Enter Runs of Player :  \n");
     scanf("%d",&player[i].run);

     printf("Enter Average of Player :  \n");
     scanf("%f",&player[i].average);

     printf("Enter Wickets of Player :  \n");
     scanf("%d",&player[i].wicket);
     
     printf("Enter 1. Batsman or 2. Bowler :  \n");
     scanf("%d",&player[i].role);
     

printf("\n=================================================\n");
  }


//
int choice;
ch:
printf("1.Number Of Batsman Of Particular Country\n");
printf("2.Batsman Having Highest Average.(sorting)\n");
printf("3.Player Having Most Runs.\n");
printf("4.Player Having Most Wickets.\n");
printf("5.Number Of Bowler Of Particular Country\n");
printf("6.Get Info About Player.\n");
printf("7.Show Details Of All Player.\n");
printf("8.Exit\n");
printf("Enter Your Choice : ");

scanf("%d",&choice);

switch(choice)
{  
  case 1: 
  printf("\n=================================================\n");

   printf("Enter NAme Of Country \n");
           scanf("%s",cont);
         int count=0;
         for(int i=0;i<n;i++) 
         {
           if(strcmp(cont,player[i].country)==0)
           {
             if(player[i].role==1)
             {
                  count++;
             }
           }
         } 
          
          printf("NO. Of Batsman From %s : %d\n",cont,count);
 printf("\n=================================================\n");

   break;

 case 2:
   for ( int i=1;i<n;i++)   {
     for (j=0;j<n-i;j++){
       
       if (player[j].average<player[j+1].average)
       {
            swap(&player[j], &player[j+1]);
       }          
} } 
 printf("\n=================================================\n");
  printf("Highest Runs : \n");
  printf("Name\t\tRuns\n");
       for(int i=0;i<n;i++)
       {
         printf("%s\t\t\t%f\n",player[i].name,player[i].average);
       }
    printf("\n=================================================\n");
    printf("Highest Average :  \n");
    printf("%s\t\t\t%.2f\n",player[0].name,player[0].average);
    printf("\n=================================================\n");

  break;




  //sorting for most runs.
  case 3:
    
    for ( int i=1;i<n;i++)   {
     for (j=0;j<n-i;j++){
       
       if (player[j].run<player[j+1].run)
       {
            swap(&player[j], &player[j+1]);
       }          
} } 

   printf("\n=================================================\n");
  printf("Highest Runs : \n");
  printf("Name\t\tRuns\n");
       for(int i=0;i<n;i++)
       {
         printf("%s\t\t\t%d\n",player[i].name,player[i].run);
       }
    printf("\n=================================================\n");

    printf("Highest Run Scorer :  \n");
    printf("%s\t\t\t%d\n",player[0].name,player[0].run);
    printf("\n=================================================\n");
  break;
   

  //most wickets
  case 4: 
  for ( int i=1;i<n;i++)   {
     for (j=0;j<n-i;j++){
       
       if (player[j].wicket<player[j+1].wicket)
       {
            swap(&player[j], &player[j+1]);
       }          
} } 
 printf("\n=================================================\n");
  printf("Highest Wickets : \n");
  printf("Name\t\tRuns\n");
       for(int i=0;i<n;i++)
       {
         printf("%s\t\t\t%d\n",player[i].name,player[i].wicket);
       }
    printf("\n=================================================\n");
   printf("Highest Wicket Taker :  \n");
    printf("%s\t\t\t%d\n",player[0].name,player[0].wicket);
    printf("\n=================================================\n");
  break;
    
    //highest avg
 
 
  
   case 5: 
  printf("\n=================================================\n");

   printf("Enter NAme Of Country \n");
           scanf("%s",cont);
          count=0;
         for(int i=0;i<n;i++) 
         {
           if(strcmp(cont,player[i].country)==0)
           {
             if(player[i].role==2)
             {
                  count++;
             }
           }
         } 
          
          printf("NO. Of Bowler From %s : %d\n",cont,count);
 printf("\n=================================================\n");

   break;
    
//Show Data Of Particular Player : 
  case 6:   
  printf("\n=================================================\n");
  char p[20];
  printf("Enter Name Of Player:  \n");
  scanf("%s",p);
  int j=0;
  for(int i=0;i<n;i++)
  {
    if(strcmp(p,player[i].name)==0)
    {
      j=i;
      break;

    }
  }
   printf("\n=================================================\n");
   printf("Name\t\tRuns\t\tWics\t\tAvg\n");
    printf("%s\t\t\t%d\t\t\t%d\t\t\t%.2f\n",player[j].name,player[j].run,player[j].wicket,player[j].average);
    printf("\n=================================================\n");
 break;

  //show data of all Players
  case 7:
printf("\n=================================================\n");
  printf("Name\t\tRuns\t\tWics\t\tAvg\n");
       for(int i=0;i<n;i++)
       {
         printf("%s\t\t\t%d\t\t\t%d\t\t\t%.2f\n",player[i].name,player[i].run,player[i].wicket,player[i].average);
       }
    printf("\n=================================================\n");
  break;
case 8:return 0;


}
goto ch;





}




void swap(struct cric *xp, struct cric *yp)
{
    struct cric temp = *xp;
    *xp = *yp;
    *yp = temp;
}