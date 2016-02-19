#include <stdio.h>
char uppercase(char);

int main(void)
{
  char c;

  c = uppercase('a');
  printf("%c\n", c);
  c = uppercase('h');
  printf("%c\n", c);
  c = uppercase('A');
  printf("%c\n", c);
  c = uppercase('{');
  printf("%c\n", c);
  return (0);
}
ubuntu@ip-172-31-63-244:~/holbertonschool$ gcc -Wall -Werror -Wextra -pedantic 1-main.c 1-uppercase.c  -o uppercase && ./uppercase
A
H
A
{
  ubuntu@ip-172-31-63-244:~/holbertonschool$
