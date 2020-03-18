#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool test_sort(int sorted[], int length) {
  printf("test_sort\n");
  printf("length = %d\n", length);
  
  for (int i = 0; i < length; i++) {
    printf("index = %d, element = %d\n", i, sorted[i]);
    if (i == 0) {
      continue;
    }

    if (sorted[i - 1] > sorted[i]) {
      return false;
    }
  }

  return true;
}

int main(int argc, char* argv[argc+1]) {
  // puts('Hello World!');
  printf("main\n");

  int a[5] = {
    [0] = 1,
    [1] = 2,
    [2] = 3,
    [3] = 4,
    [4] = 5,
  };

  int a_length = sizeof(a) / sizeof(int);

  int b[5] = {
    [0] = 1,
    [1] = 4,
    [2] = 3,
    [3] = 2,
    [4] = 5,
  };

  int b_length = sizeof(b) / sizeof(int);

  bool result_a = test_sort(a, a_length);
  bool result_b = test_sort(b, b_length);

  if (result_a) {
    printf("a: OK\n");
  }

  if (result_b) {
    printf("b: OK\n");
  }

  return EXIT_SUCCESS;
}

