int first_digit(int n)
{
  long int n2;
  n2 = n;

  if (n2 < 0)
    {
      n2 = ( n2 * -1);
    }
  while ( n2 > 9)
    {
      n2 = (n2 / 10);
    }

  return (n2);
}
