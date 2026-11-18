#include<stdio.h>
struct Student
{
int roll_number;
char name;
float cut-off;
char city[50];
char Dream[50];
};
void Read_input(struct Student S[],int size);
void Display_output(struct Student S[],int size);

int main()
{
int count;
printf("Enter the Student Count");
scanf("%d",&count);
struct Student S[count];
Read_input(S,count);
Display_output(S,count);
return 0;
}
void Read_input(struct Student S[],int size)
{
int i,counter=1;
for(i=0;i<size;i++)
{
print("\nEnter the Student %d Details:",counter);
printf("\n Enter the Roll Number:");
scanf("%d",&S[i].roll_number);

printf("\nEnter the Name of the Student:");
scanf("%s",S[i].name);

printf("\nEnter the Cut-off Student:");
scanf("%f",S[i].cut-off);

printf("\nEnter the City of the Student:");
scanf("%s",S[i].city);

printf("\nEnter the Dream of the Student:");
scanf("%s",S[i].Dream);
counter++;
}
}
void Display_output(struct Student S[],int size)
{
int i,counter=1;
for(i=0;i<size;i++)
{
printf("\nStudent %d Roll Number=%d\n",counter,S[i].rollnumber);
printf("\nStudent %d Name=%s\n",counter,S[i].name);
printf("\nStudent %d Cut-off=%f\n",counter,S[i].cut-off);
printf("\nStudent %d City=%s\n",counter,S[i].city);
printf("\nStudent %d Dream=%s\n",counter,S[i].Dream);

counter++;
}
}