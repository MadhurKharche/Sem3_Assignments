#include <stdio.h>
struct Cricket
{

char name[20];

int age;

char country[20];

int no_of_wickets;

int no_of_Matches_played;

int Avg_Score;

char type_of_player [25];

}c[5]; 

void accept(struct Cricket c[5], int n) {

int i;

for(i=0;i<n;i++)
{

printf("\nEnter the Name of Player: ");

scanf("%s", c[i].name);

printf("\nEnter the Category of player: Batsman, Bowler, Wicket keeper,All-rounder");

scanf("%s", c[i].type_of_player);

printf("\nEnter the Country of Player");

scanf("%s",c[i].country); 

printf("\nEnter the Age of Player: ");

scanf("%d",&c[i].age);

printf("\nEnter the number of matches played: "); 

scanf("%d",&c[i].no_of_Matches_played);

printf("\nEnter the no of wickets:");

scanf("%d",&c[i].no_of_wickets);
}
}

void display(struct Cricket c[5], int n)
{

int i;

printf("\nSr.No\tName\tCategory\tCountry\tAge\tTotal matches\ttotal Wickets");

for(i=0;i<n;i++)
{

printf("%d\t",i+1);

printf("%s\t",c[i].name); printf("%s\t",c[i].type_of_player);

printf("%s\t",c[i].country);

printf("%d\t",c[i].age); printf("%d\t",c[i].no_of_Matches_played);

printf("%d\t",c[i].no_of_wickets);
}
}

int main(){

 void accept(struct Cricket c[5], int n); 
 void display (struct Cricket c[5], int n);

int i,n,ch;

printf("\n Enter the number of records:");

scanf("%d" ,&n);

do{
    

printf("\n1. Accept the information"); 
printf("\n2. Display the information"); 
printf("\n3.Exit"); 
printf("\nEnter your choice"); 
scanf("%d", &ch);

switch(ch)
{
    case 1: accept(c,n);
        break; 

    case 2: display(c,n);
        break;

}

}while(ch!=3);
return 0;
}