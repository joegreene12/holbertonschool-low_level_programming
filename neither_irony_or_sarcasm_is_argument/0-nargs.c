#include <stdio.h>

int main(int argc, char **argv)
{
  argv[0] = "";
  printf("%d\n", argc - 1); /* Extra arg was printing so sub 1 */
  return (0);
}
