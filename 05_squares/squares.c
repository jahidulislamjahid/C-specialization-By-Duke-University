#include <stdio.h>
#include <stdlib.h>

//My code.
int max(int a, int b) {
  return a >= b ? a : b;
}

int is_border(int x, int y,
	      int xmin, int xmax,
	      int ymin, int ymax) {

  if (x >= xmin && x <= xmax && (y == ymin || y == ymax)) {
    return 1;
  }

  if (y >= ymin && y <= ymax && (x == xmin || x == xmax)) {
    return 1;
  }

  return 0;

}

void squares(int size1, int x_offset, int y_offset, int size2) {
  int w = max(size1, x_offset + size2);

  int h = max(size1, y_offset + size2);

  int x, y;

  for (y=0; y < h; y++) {

    for (x=0; x < w; x++) {
      if (is_border(x, y,
		    x_offset, x_offset + size2 - 1,
		    y_offset, y_offset + size2 - 1)) {
	printf("*");
      }
      else if (is_border(x, y, 0, size1-1, 0, size1-1)) {
	printf("#");
      } 
      else {
	printf(" ");
      }
    }
    printf("\n");

  }
}


/* 
 * Determines if coord is in range between
 * offset (INCLUSIVE) and offset + size (EXCLUSIVE)
 */
//int isInRange(int coord, int offset, int size) {
  // if coord is in range, return 1
  // else, return 0
  //return 0;
//}

/*
 * Determines if coord is at border of offset or
 * offset + size
 */
//int isAtBorder(int coord, int offset, int size) {
  // if coord is equal to offest or offset + size
  // return 1, else return 0
  //return 0;
//}

//void squares(int size1, int x_offset, int y_offset, int size2) {
  //compute the max of size1 and (x_offset + size2).  Call this w

  //compute the max of size1 and (y_offset + size2).  Call this h

  //count from 0 to h. Call the number you count with y

    //count from 0 to w. Call the number you count with x

      //check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *

      //if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #

      //else print a space
    //when you finish counting x from 0 to w, 
    //print a newline

//}
