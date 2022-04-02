//
// file: long_sort.c
// description: The main program that tests sorting longs.
//
// @author Ryan Nowak rcn8263

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// include header file for this module
#include "sorts.h"

/// Prints the elements withing the array
///
/// @param count the number of elements within the data array
/// @param data array of pointers to the longs to print
static void print(int count, long data[]) {
   for(int i = 0; i < count-1; i++) {
      printf("%ld\n", data[i]);
   }
}

/// Takes in an array of numbers as strings from input, converts them to longs,
/// sorts the array in ascending order, then prints the sorted elements
///
/// @param argc number of arguments
/// @param argv array containing the name of the program and the arguments from
///        input
int main(int argc, char * argv[]) {
   if(argc < 2) {
      return EXIT_FAILURE;
   }
   long longs[argc-1];
   for (int i = 0; i < argc-1; i++) {
     long temp = strtol(argv[i+1], NULL, 10);
     if (temp == LONG_MIN || temp == LONG_MAX) {
       fprintf(stderr, "value[%d] = %s out of range: using %ld\n",
               i, argv[i+1], temp);
     }
     longs[i] = temp;
   }
   sort_longs(argc, longs);
   print(argc, longs);
   
   return EXIT_SUCCESS;
}