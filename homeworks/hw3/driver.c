#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cs220_paint.h"

int main(int argc, char *argv[]) {
  // TODO: check that correct number of command line arguments were passed
  // report error if not
  if (argc != 3) {
    printf("Error incorrect number of arguments.);
    return 1;
  }
  const char *in_filename, *out_filename;
  // TODO: get command line arguments
  in_filename = fscanf(argv[1]);
  out_filename = fscanf(argv[2]);
  // TODO: open input file
  FILE* in = fopen("in_filename", "r");
  if (input == NULL) {
    printf("Error could not open input file.");
    return 1;
  }
  // TODO: read header (width and height) from input file
  fscanf(in,"$d $d", img_width, img_height);
  // TODO: allocate pixel buffer, and set every pixel
  // to be black
  unsigned char *pixel_data = calloc(img_width * img_height * 3, sizeof(char));
  // TODO: process commands, call helper functions
  // to perform drawing operations

  int error = 0;
  char command;

  int rc = fscanf(in, " %c", &command); // read first command

  while (!error && rc != EOF) {
    switch (command) {
    case 'c':   // set current color
      {
	if (fscanf == 3) {
	fscanf(in, "%d %d %d", &r, &g, &b);
	Color color = Color.fromArgb(r, g, b);
	}
	else {
	  printf("Error incorrect number of arguments!");
	  return 1;
	}
	// TODO: implement
      }
      break;

    case 'r':   // rectangle
      {
	if (fscanf == 4) {
	  fscanf(in, "%d %d %d %d", &x_coord, &y_coord, &rect_width, &rect_height);
	  render_rectangle(*pixel_data, img_width, img_height, x_coord, y_coord, rect_w, rect_h, r, g, b);
	  
	}
	else {
	  printf("Error incorrect number of arguments!");
	  return 1;
	}
	
        // TODO: implement
      }
      break;

    case 'e':   // ellipse
      {
	if (fscanf == 3) {
	fscanf(in, "%d %d %d", &x_coord, &y_coord, &length);
	render_ellips(
	}
	else {
	  printf("Error incorrect number of arguments!");
	  return 1;
	  // TODO: implement
      }
      break;

    case 'f':   // flood fill
      {
        // TODO: implement
      }
      break;

    default:    // unknown command
      printf("Error: Unknown command '%c'\n", command);
      error = 1;
      break;
    }

    if (!error) {
      rc = fscanf(in, " %c", &command); // read next command
    }
  }

  // TODO: close input file
  fclose(in_filename);
  // TODO: if an error occurred while processing commands, report it
  
  // TODO: try to write output file by calling write_image

  // TODO: if output couldn't be written, report error

  printf("Success\n");

  return 0;
}
