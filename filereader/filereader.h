#ifndef _FILEREADER_H
#define _FILEREADER_H

/*
 * Given an object and a function to add values 
 * to that object, reads integers from a file.
 * Files should be formatted 1 value to every line
 */
extern void readIntoStructure(
  // the object to add values to
  const void * object,
  // the function to use to do so
  void(*add)(void * obj, int value),
  char * filename
);

#endif
