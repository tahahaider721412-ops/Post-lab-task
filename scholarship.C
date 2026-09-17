#include <stdio.h>

int main()
{
float marks,income;
 printf("Enter marks:");
    scanf("%f",&marks);
    printf("enter family income: ");
    scanf("%f", &income);
    if (marks>= 80 || income< 50000)
    {
        printf("Student qualifies for scholarship.");
   }else
    {
    printf("student not qualified for scholarship.");
        }
return 0;
}
