#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cs220_paint.h"

unsigned char *read_image(const char *filename, int *width, int *height) {
  // open file for reading?
  FILE *in = fopen(filename, "rb");
  if (in == NULL) {
    return NULL;
  }

  // read image dimensions
  if (fscanf(in, "%d %d", width, height) != 2) {
    fclose(in);
    return NULL;
  }

  // allocate buffer for RGBA triples
  int num_vals = *width * *height * 3;
  unsigned char *buf = (unsigned char *) malloc(num_vals * sizeof(unsigned char));
  if (buf == NULL) {
    fclose(in);
    return NULL;
  }

  // read RGBA triples
  int error = 0;
  for (int i = 0; i < num_vals; i++) {
    unsigned val;
    if (fscanf(in, "%x", &val) != 1) {
      error = 1;
    } else {
      buf[i] = (unsigned char) val;
    }
  }

  // now can close input
  fclose(in);

  // if error, delete buffer and return NULL
  if (error) {
    free(buf);
    return NULL;
  }

  // return buffer
  return buf;
}

// Suggested helper functions to implement for drawing operations
// (initially commented-out: we encourage you to uncomment and
// implement them)


/*The write_image function (which you are required to implement) should write image file data to the file
 named by the filename parameter. The width and height parameters indicate the width and height of the image.
 The buf parameter is an array of color component values (r/g/b triples, arranged row by row.)

If write_image successfully writes the complete image data, it should return 1, otherwise it should return 0.

*/
int write_image(const char *filename, int width, int height, const unsigned char *buf) {
  //loop for width * height * 3
  FILE *out = fopen(filename, "wb");
  if (out == NULL) {
    return 0;
  }
  fprintf(out, " %d %d \n", width, height);
  int i;
  
  int size = 3 * height * width;
  for( i = 0; i < size; i++) {
    fprintf(out, "%x ", buf[i]);
  }
  fclose(out);
  return 1;
}



double geom_dist(double x1, double y1, double x2, double y2) {
  double dist = sqrt(pow((x2-x1),2.0) + pow((y2-y1),2.0));
		     return dist;
}



void render_rectangle(unsigned char *pixel_data, int img_width, int img_height,
                      int rect_x, int rect_y, int rect_w, int rect_h,
                      int r, int g, int b) {

  //rect = rectangle(rect_x, rect_y, img_width - rect_x, img_height - rect_y);
    //3 *y * img_width + x * 3 is the starting pixel

    int starting_index = 3 * rect_y + img_width * rect_x * 3;

    for (int i = 0; i < rect_w; i++ ) {
      for (int j = 0; j < rect_h; j++) {
       
	int cur_col = i * 3 * img_width;
	int cur_row = j	* 3 * img_height;
	pixel_data[starting_index + cur_col + cur_row] = r;
	pixel_data[starting_index + cur_col + cur_row + 1] = g;
	pixel_data[starting_index + cur_col + cur_row + 2] = b;

    }
  }
  }

void render_ellipse(unsigned char *pixel_data, int img_width, int img_height,
                      double x1, double y1, double x2, double y2, double len,
                      int r, int g, int b) {
  // TODO: implement this function
}


/*
void flood_fill(unsigned char *pixel_data, int img_width, int img_height,
                int x, int y, int r, int g, int b) {
  // TODO: implement this function
}
*/

/*
void rec_flood_fill(unsigned char *pixel_data, int img_width, int img_height,
                    int x, int y,
                    int orig_r, int orig_g, int orig_b,
                    int r, int g, int b,
                    int dir) {
  // TODO: implement this function
}
*/
