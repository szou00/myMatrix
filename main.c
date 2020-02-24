#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  printf("\n");

  screen s;
  struct matrix *m1;
  struct matrix *m2;

  clear_screen(s);
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

  free_matrix(m1);
  free_matrix(m2);
}
