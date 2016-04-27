void print_char(char);
void print_base16(void)
{
  int i;
  i = '0';
    while( (i >= 48) && (i <= 57))
      {
	print_char(i);
	i++;
      }

    i = 'A';
    while ((i >= 65) && (i <= 70))
      {
	print_char(i);
	i++;
      }
}
