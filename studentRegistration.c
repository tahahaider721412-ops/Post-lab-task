#include <stdio.h>
int main() {
char name[100];
printf("enter student's full name:")
fgets(name, sizeof(name), stdin);
puts("student name:");
puts(name);
return 0;
}
