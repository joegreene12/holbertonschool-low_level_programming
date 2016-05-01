char *rev_string(char *str)
{
  int i;
  int len;
  int tmp;
  char new;
  i = 0;
  len = 0;
 
  while ( str[len] != '\0' )
    {
      len++;
    }

  tmp = len - 1;
  while ( i < tmp )
    {
      new = str[i];
      str[i] = str[tmp];
      str[tmp] = new;
      i++;
      tmp--;
    }
  return(str);
}
