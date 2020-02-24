#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  printf("\n");

  struct matrix *m1;
  struct matrix *m2;

  m1 = new_matrix(4, 4);
  m2 = new_matrix(4, 4);

  printf("Testing add_edge. Adding (1,2,3), (4,5,6) to m2\n");
  add_edge(m2, 1,2,3,4,5,6);
  print_matrix(m2);

  printf("Testing Matrix identity for m1\n");
  ident(m1);
  print_matrix(m1);

  printf("Testing Matrix multiplication for m1 and m2\n");
  matrix_mult(m1,m2);
  print_matrix(m2);

  printf("Freeing matrices\n");
  free_matrix(m1);
  printf("Freed Matrix 1\n");
  free_matrix(m2);
  printf("Freed Matrix 2\n");

  //drawing picture
  printf("\ndrawing!!\n");

  screen s;
  color c;
  clear_screen(s);

  c.red = 0;
  c.green = 255;
  c.blue = 0;

  struct matrix *picture = new_matrix(4, 100);
  // for(int i = 0; i < 20; i++){
    add_edge(picture, 0, 250, 0, 499, 250,0);
    // add_edge(picture, (i * 10 + 20),(500 - i * 10), 0, (i*20%500),(500- i*15),0);
  // }

  draw_lines(picture, s, c);
  display(s);
  save_extension(s, "picture.png");
  save_ppm(s, "binary.ppm");
  save_ppm_ascii(s, "ascii.ppm");

  free_matrix(picture);
}
