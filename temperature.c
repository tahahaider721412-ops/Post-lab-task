#include <stdio.h>
int main() {
float celsius, fahrenheit;
printf("enter temperature in Celsius:");
 scanf("%f", &celsius);
fahrenheit= (celsius* 9/5) +32;
printf("temperature in fahrenheite= %.2f", fahrenheit);
return 0;
}
