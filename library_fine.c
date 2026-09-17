#include <stdio.h>
int main(){
int lateDays;
printf("enter number of late days:");
scanf("%d", &lateDays);
if(lateDays==0) {
printf("no Fine");
}
 else
{
 if(lateDays >= 1 && lateDays<=5) {
 printf("fine:Rs.50");
}
else {
 if (lateDays>=6 && lateDays <=10) {
 printf("fine:Rs.100");
}
else {
if (lateDays >10) {
printf("Fine:Rs.200");
 } 
 } 
}

return 0;
}
