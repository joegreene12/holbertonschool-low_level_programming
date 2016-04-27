int print_char(char c);
void positive_or_not(int i)
{
  if(i == 0){
    print_char('Z');
  }
  else if (i > 0) {
    print_char('P');
  }
  else{
    print_char('N');
  }
}
