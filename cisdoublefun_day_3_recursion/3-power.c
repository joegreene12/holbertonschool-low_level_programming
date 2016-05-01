int power(int x, int y)
{
  int res;
  if ( y < 0 )
    {
      return ( -1 );
    }
  if ( x < 0 )
    {
      return ( -1 );
    }
  else if ( y == 0 )
    {
      return ( 1 );
    }
  else
    {
      res = x * power( x,y-1 );
    }
  return(res);
}
