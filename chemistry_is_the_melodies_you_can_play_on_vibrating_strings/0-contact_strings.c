char *concat_strings(char *dest, const char *src){

  int count = 0;
  int i;
for(i=0; dest[i] != '\0'; i++)
  count ++; 
 for(i=count; src[i] != '\0'; i++){
  dest[i] = src[i];}
  dest[i] = '\0';
  return dest;
}
