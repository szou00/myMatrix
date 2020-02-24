#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;

  edges = new_matrix(4, 4);

  ident(edges);
  print_matrix(edges);

  add_edge(edges, 1,2,3,4,5,6);
  print_matrix(edges);

  free_matrix( edges );
}
