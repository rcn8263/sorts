//
// file: sort.c
// description: The implementation of the sorting utility module.
//
// @author Ryan Nowak rcn8263

#include <string.h>

// include header file for this module
#include "sorts.h"

/// sorts an array of strings in alphabetical order
void sort_strings( int count, char * data[] ) {
   for (int i = 0; i < count-2; i++) {
      for (int j = i + 1; j < count-1; j++) {
         if(strcmp(data[i], data[j]) > 0) {
            char *temp = data[i];
            data[i] = data[j];
            data[j] = temp;
         }
      }
   }
}

/// sorts an array of longs in ascending order
void sort_longs( int count, long data[] ) {
   for (int i = 0; i < count-2; i++) {
      for (int j = i + 1; j < count-1; j++) {
         if(data[i] > data[j]) {
            long temp = data[i];
            data[i] = data[j];
            data[j] = temp;
         }
      }
   }
}