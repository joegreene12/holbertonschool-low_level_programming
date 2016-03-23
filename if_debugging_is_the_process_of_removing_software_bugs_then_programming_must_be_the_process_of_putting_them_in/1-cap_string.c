char *cap_string(char *j){
  int i;
  for(i = 0; j[i] != '\0'; i++){
    if( j[i] == ' ' || j[i] == '\n' || j[i] == '\t'){
      if(j[i+1] >= 'a' && j[i+1] <= 'z'){
	j[i+1] = j[i + 1] - 32;}}}
  
  return j;




}
