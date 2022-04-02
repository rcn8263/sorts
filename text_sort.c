//
// file: text_sort.c
// description: The main program that tests sorting C strings.
//
// @author Ryan Nowak rcn8263

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// include header file for this module
#include "sorts.h"

/// Prints the elements withing the array
///
/// @param count the number of elements within the data array
/// @param data array of pointers to print
static void print(int count, char * data[]) {
   for(int i = 0; i < count-1; i++) {
      printf("%s\n", data[i]);
   }
}

/// Takes in an array of strings from input, sorts the array in alphabetical
/// order then prints the sorted elements
///
/// @param argc number of arguments
/// @param argv array containing the name of the program and the arguments from
///        input
int main(int argc, char * argv[]) {
   if(argc < 2) {
      return EXIT_FAILURE;
   }
   char *c[argc-1];
   for (int i = 0; i < argc; i++) {
     c[i] = argv[i+1];
   }
   sort_strings(argc, c);
   print(argc, c);
   
   return EXIT_SUCCESS;
}