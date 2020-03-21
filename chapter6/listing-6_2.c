#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[argc+1]) {
  size_t const len = strlen(argv[0]); // Computes the length
  char name[len+1]; // Creates a VLA

  memcpy(name, argv[0], len);
  name[len] = 0;

  if (!strcmp(name, argv[0])) {
    printf("program name \"%s\" successfully copied\n", name);
  } else {
    printf("copying %s leads to different string %s\n", argv[0], name);
  }
}

  


