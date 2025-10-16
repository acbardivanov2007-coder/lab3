#include <stdio.h>
#include <string.h>
int main()
{
char name[20];
char surname[20];
printf("введите свое имя:\n");
scanf("%s", &name);
printf("введите свою фамилию:\n");
scanf("%s", &surname);
printf("%s %s\n", name, surname);
printf("%*d %*d\n", strlen(name)/2, strlen(name)/2, strlen(surname)/2, strlen(surname)/2);
printf("%s %s\n", name, surname);
printf("%-*d %-*d\n", strlen(name)/2, strlen(name)/2, strlen(surname)/2, strlen(surname)/2);
return 0;
}
