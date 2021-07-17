#include <stdio.h>

// declares a global array of 2048 characters
// this can be accessed in any part of the program
// `static` makes this variable local to this file
static char input[2048];

int main(int argc, char** argv) {
  puts("Tashima-LISP Version 0.0.0.0.1");
  puts("Press CTRL+c to Exit");

  // infinite loop `while (true)`
  while (1) {
    // variation of puts that does not append a new line character
    fputs("t-lisp> ", stdout);

    // gets user input from the therminal
    fgets(input, 2048, stdin);

    printf("No you're a %s", input);
  }

  return 0;
}
