char *string_ncopy(char *dest, const char *src, int n)
{
  int i;
  i = 0;
  while ( src[i] != '\0' )
    {
      dest[i] = src[i];
      i++;
      n++;
    }
  return(dest);




}
