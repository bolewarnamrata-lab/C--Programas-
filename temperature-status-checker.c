# include<stdio.h>
int main()
{
float Temperature;

printf("Enter Temperature:");
scanf("%f",&Temperature);

if (Temperature <50)
printf("Patient Status: Normal");

else if (Temperature <= 75)
printf("Patient Status: Warning");

else 
printf("Patient Status: Critical");
}
