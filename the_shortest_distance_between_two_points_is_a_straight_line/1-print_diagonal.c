int print_char(char c);

void print_diagonal(int n){
  int i;
  int j;
  if (n<=0){
      print_char('\n');
    }
for(i=0;i<n;i++){
    for(j=0; j<i;j++){
      print_char(' ');


    }
      print_char('\\');
      print_char('\n');

    }
}
