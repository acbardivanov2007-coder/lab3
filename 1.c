#include <stdio.h>
int main()
{
char name[30];
char surname[30];
printf("Введите имя и фамилию:\n");
scanf("%s %s", name, surname);
printf("Ваше полное имя: %s %s", surname, name);
return 0;
}
