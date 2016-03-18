char *nconcat_strings(char *dest, const char *src, int n){

  int count = 0;
  int i;
  int j;
  for(i=0; dest[i] != '\0'; i++){
    count ++;}
  for(i=count,j = 0; j < n &&  src[i] != '\0'; i++, j++){
    dest[i] = src[j];}
  dest[i] = '\0';
  return dest;
}
