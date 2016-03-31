int power(int x, int y)
  {
      if (y < 0)
          return (-1);
      else if (y == 1)
          return (x);
      else if (y == 0)
          return (1);
      else if ((x * power(x, y-1)) < 0)
          return (-1);
          else if ((x * power(x, y-1)) > 2147483647)
          return (-1);
      else
          return (x * power(x, y-1));
  }
