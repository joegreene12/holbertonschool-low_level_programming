int  print_char(char c);
int  box(int);

/*int main(void){
int a; 

for(a = 0; a<=3; a = a+1) {
print_char('a');
 }
 return(0);
 }*/

int main(){
  box(1);
  box(2);
  box(3);
  box(4);
  box(10);
  box(-2);

  return(0);
}

int box(int john){
  int n;
  int tmpn;

  if (john==1){
    print_char('0');
    print_char('\n');
    return(0);
}
  else if(john<1){
    return(0);
};


  for (n=0;n<1;){
  n=n+1;
  print_char('0');
 }
  for (n=0;n<john-2;n=n+1){
   print_char('-');}

 print_char('0');
 print_char('\n');

 for (n=0;n<john-2;n=n+1){
   print_char('|');
   for(tmpn=0;tmpn<john-2;tmpn=tmpn+1){
     print_char(' ');}
   
   print_char('|');
   print_char('\n');
 }
 print_char('0');

 for (n=0;n<john-2;n=n+1){
   print_char('-');}
 
 print_char('0');
 print_char('\n');

 return(0);
 }

