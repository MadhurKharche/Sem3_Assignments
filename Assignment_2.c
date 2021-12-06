#include<stdio.h>
#include<string.h>

struct Player_Info
{
    int Age, ODIs , T20s ,Runs,wickets;
    char Name[20];
    char Country[20];
    int Category;
    float Avg;
}p[15];

int main(){
    char PlayerCountry[20];
    int n, max_wickets;
    
    printf("\n Enter the Number of Players : ");
    scanf("%d",&n);

void Accept(struct Player_Info p[15],int n);
void Display(struct Player_Info p[15],int n);
void Country_Category(struct Player_Info p[15] , int n , char Country[20],int category);
void Sort(struct Player_Info p[15] , int n , int function);
int Binary_search(struct Player_Info p[15] , int n,int MaxWickets);

Accept(p,n);
Display(p,n);
int choice;

do{
    printf("\n\n Enter 1 : Search Batsman of Particular Country");
    printf("\n Enter 2 : Sort by Highest Batting Average");
    printf("\n Enter 3 : Batsman with Highest Batting Average");
    printf("\n Enter 4 : Number of Bowlers of Particular Country");
    printf("\n Enter 5 : The bowler that has taken a maximum no of wickets");
    printf("\n Enter 6 : Display board information of Particular Player");
    printf("\n Enter 7 : Display data of all the Players");
    printf("\n Enter 8 : Quit");
    printf("\nYour Choice : ");
    scanf("%d",&choice);

switch (choice)
{
case 1 :printf("\n Finding Batsmen of a Particular country");
        printf("\n Enter Country Name : ");
        scanf("%s",PlayerCountry);
        Country_Category(p , n , PlayerCountry,1);
        break;

case 2 : printf("\n Order of Batting Average is : ");
         Sort(p,n,1);
         break;

case 3 : printf("\n Batsman with highest batting average is  : ");
         Sort(p,n,2);
         break;

case 4 : printf("\n Bowlers of entered country are : ");
         printf("\n Enter Country Name : ");
         scanf("%s",PlayerCountry);
         Country_Category(p, n , PlayerCountry , 2);
         break;
         
case 5 : printf("\n Bowler with Maximum number of wickets is : ");
         max_wickets = p[0].wickets;

         for(int i=1; i<n ; i++){
                if(p[i].wickets>max_wickets){
                    max_wickets = p[i].wickets;
                }
         }
         int index = Binary_search(p,n,max_wickets);
        printf("%s",p[index].Name);
        break;

case 6 : printf("\n Enter player name : ");
        char Player_Name[20];
        scanf("%s",Player_Name);
        void SearchByName(struct Player_Info p[15] , int n , char Name[20]);
        SearchByName(p,n,Player_Name);
        break;

case 7 : Display(p,n);
        break;

case 8 : printf("\n Thank you"); 
        break;

default: printf("\n You have entered a Invalid choice");
        break;
}
}while(choice!=8);
}

void Accept(struct Player_Info p[15], int n){
    for(int i=0; i<n ; i++){
        printf("\n\n Enter Info of Player %d",i+1);
        printf("\n Player Name : ");
        scanf("%s",p[i].Name);

        printf("\n Country : ");
        scanf("%s",p[i].Country);
        
        printf("\n Age : ");
        scanf("%d",&p[i].Age);

        printf("\n 1) Batsman \t 2) Bowler \n 3) Wicket-Keeper \t 4) All-Rounder");
        printf("\n Enter Category Number : ");
        scanf("%d",&p[i].Category);

        printf("\n ODIs Played : ");
        scanf("%d",&p[i].ODIs);

        printf("\n T20s Played : ");
        scanf("%d",&p[i].T20s);
        
        printf("\n Total Runs in ODI and T20 : ");
        scanf("%d",&p[i].Runs);

        printf("\n Enter number of wickets taken : ");
        scanf("%d",&p[i].wickets);

        p[i].Avg = (float)p[i].Runs/(p[i].ODIs+p[i].T20s);
    }
}

void Display(struct Player_Info p[15] , int n){
printf("\n Name \t Country \t Age \t\t ODIS \t\t T20s \t\t Wickets \t   Runs \t   Average");
    for(int i=0; i<n ; i++){
        // printf("\n\n-------------------Player %d----------------------",i+1);
        // printf("\n Name : %s",p[i].Name);
        // printf("\n Country : %s",p[i].Country);
        // printf("\n Age : %d",p[i].Age);
        // printf("\n Runs : %d",p[i].Runs);
        // printf("\n ODIs : %d" , p[i].ODIs);
        // printf("\n T20s : %d",p[i].T20s);
        // printf("\n Batting Average : %.2f" , p[i].Avg);

        printf("\n %s \t %s \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %.2f",p[i].Name,p[i].Country,p[i].Age,p[i].ODIs,p[i].T20s,p[i].wickets,p[i].Runs,p[i].Avg);
    }
}

void Country_Category(struct Player_Info p[15] , int n , char Country[20],int category){
int count=0;
if(category==1)
printf("\n Batsmen of the Entered Country are : ");
else if(category==2)
printf("\n Bowlers of the Entered COuntry are : ");

    for(int i=0; i<n; i++){
        if(strcmp(p[i].Country,Country)==0 && p[i].Category==category){
            count++;
            printf("\n %d) %s",count,p[i].Name);
        }
    }
    printf("\n Total number of entered category is : %d",count);
}

void SearchByName(struct Player_Info p[15] , int n , char Name[20]){

    for(int i=0; i<n ; i++){

        if(strcmp(p[i].Name,Name)==0){
        printf("\n");
        printf("Name \t\t Age \t\t Country \t\t ODIS \t\t T20s \t\t Runs \t\t Wickets \t\t Average\n");
        printf("%s \t\t %d \t\t %s \t\t\t %d \t\t %d \t\t %d \t\t %d \t\t %.2f",p[i].Name,p[i].Age,p[i].Country,p[i].ODIs,p[i].T20s,p[i].Runs,p[i].wickets,p[i].Avg);
        }
    }
}

void Sort(struct Player_Info p[15] , int n,int function){
   
    int i ,j;
    struct Player_Info temp;
    
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n- 1-i); j++)
        {
            if(p[j].Avg < p[j+1].Avg)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            } 
        }
    }

    Display(p,n);
}

int Binary_search(struct Player_Info p[15] , int n, int MaxWickets){
    int beg=0, end=n-1;
int mid=0;

    while(beg<=end){
        mid = (beg+end)/2;

        if(p[mid].wickets==MaxWickets){
            return mid;
        }

        else if(p[mid].wickets>MaxWickets){
            end = mid-1;
        }
        else{
            beg = mid+1;
        }
    }
}