#include <stdio.h>
char *rev_string(char *str)
{
  int i;
  int length;
  int last;
  char joe;
  i = 0;
  while ( str[i] != '\0' )
    {
      i++;
    }

  length = i;
  last = length - 1;
  
  i = 0;
  while ( i < length / 2 )
    {
      joe = str[last];
      str[last] = str[i];
      str[i] = joe;
      last--;
      i++;
    }

  return (str);
}
