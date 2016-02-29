#include <stdio.h>
void triangles_in_the_term(int h, int n){
int height;
int space;
 int star;
 int ncopy;
 /*first function with ncopy is outer loop to print n number of triangles*/
 /*second function is height is to determine the height of rows*/
 for (ncopy = 1; ncopy <= n; ncopy ++){
 for (height = 1; height <= h; height ++) {
   /*for space is function to determine number of spaces to print before stars*/ 
  for(space = h-height; space > 0; space --){

    printf(" ");
  }
  /*function determines the number of stars to print*/
  for(star = 1; star <= height * 2 - 1; star ++){
 
    printf("*");
  }
 printf("\n");
  }
}
}
