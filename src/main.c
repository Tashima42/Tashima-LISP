#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


int main(int argc, char** argv) {
  puts("Tashima-LISP Version 0.0.0.0.1");
  puts("Press CTRL+c to Exit");

  // infinite loop `while (true)`
  while (1) {
    // variation of puts that does not append a new line character
    char *input = readline("t-list> ");

    add_history(input);

    printf("indeed, %s\n", input);
    free(input);
  }

  return 0;
}
