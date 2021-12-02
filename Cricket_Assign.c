#include<stdio.h>
#include<string.h>

struct Player_Info
{
    int Age, ODIs , T20s ,Runs;
    char Name[20];
    char Country[20];
    int Category;
    float Avg;
}p[5];

int main(){

int n;
    printf("\nEnter the Number of Players : ");
    scanf("%d",&n);

void Accept(struct Player_Info p[5],int n);
void Display(struct Player_Info p[5],int n);

Accept(p , n);
Display(p,n);
}

void Accept(struct Player_Info p[5], int n){
    for(int i=0; i<n ; i++){
        printf("\n\n Enter Info of Player %d",i+1);
        printf("\n Player Name : ");
        gets(p[i].Name);

        printf("\n Country : ");
        gets(p[i].Country);

        printf("\n 1) Batsman \t 2) Bowler \n 3) Wicket-Keeper \t 4) All-Rounder");
        printf("\n Enter Category Number : ");
        scanf("%d",&p[i].Category);

        printf("\n ODIs Played : ");
        scanf("%d",&p[i].ODIs);

        printf("\n T20s Played : ");
        scanf("%d",&p[i].T20s);
        
        printf("\n Total Runs in ODI and T20 : ");
        scanf("%d",&p[i].Runs);

        p[i].Avg = (float)p[i].Runs/(p[i].ODIs+p[i].T20s);
    }
}

void Display(struct Player_Info p[5] , int n){

    for(int i=0; i<n ; i++){
        printf("\n\n-------------------Player %d----------------------",i+1);
        printf("\n Name : %s",p[i].Name);
        printf("\n Country : %s",p[i].Country);
        printf("\n Age : %d",p[i].Age);
        printf("\n Runs : %d",p[i].Runs);
        printf("\n ODIs : %d" , p[i].ODIs);
        printf("\n T20s : %d",p[i].T20s);
        printf("\n Batting Average : %.2f" , p[i].Avg);
    }
}