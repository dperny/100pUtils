#include <stdio.h>

extern void readIntoStructure(
  void * object,
  void(*add)(void * obj, int value),
  char * filename
) {
  // open the file pointer to the file provided
  FILE *fp;
  fp = fopen(filename, "r");

  // make sure it's valid
  if (!fp) {
    // error if not, but don't halt execution
    fputs("Filename doesn't exist, aborting\n",stderr);
    return;
  }

  // a variable to hold what we read in
  int num;
  while(fscanf(fp, "%d", &num) > 0)
    // add the value to the object
    add(object, num);

  // close the pointer. numbers get
  fclose(fp);
}
