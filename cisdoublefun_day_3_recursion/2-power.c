int power(int x, int y)
{
  int i;
  int res;
  i = 0;
  res = 1;

  if ( y < 0 )
    {
      return ( -1 );
    }
  
  if ( x < 0 )
    {
    return ( -1 );
    }
  if  ( y == 0 )
    {
      return ( 1 );
    }

  while ( i < y )
    {
      res = x * res;
      i++;
    }
  return ( res );
}
