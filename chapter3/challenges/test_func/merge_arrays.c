#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int * merge_arrays(int arr_a[], int arr_a_len, int arr_b[], int arr_b_len) {
  int new_len = arr_a_len + arr_b_len;
  
  int new_arr[new_len];

  for(int i = 0; i < arr_a_len; i++) {
    new_arr[i] = arr_a[i];
  }

  for(int j = 0; j < arr_b_len; j++) {
    new_arr[arr_b_len + j] = arr_b[j];
  }

  return new_arr;
}

int main(int argc, char* argv[argc+1]) {
  printf("main\n");

  int a[10] = {
    [0] = 1,
    [1] = 3,
    [2] = 2,
    [3] = 4,
  };

  int b[10] = {
    [0] = 1,
    [1] = 3,
    [2] = 2,
    [3] = 6,
    [4] = 5,
    [5] = 4,
    [6] = 7,
    [7] = 9,
    [8] = 10,
    [9] = 8,
  };

  int a_length = sizeof(a) / sizeof(int);
  int b_length = sizeof(b) / sizeof(int);


  int result_a[] = merge_arrays(a, a_length, b, b_length);

  int result_a_length = sizeof(result_a) / sizeof(int);

  for(int i = 0; i < result_a_length; i++) {
    printf("%d", result_a[i]);
  }

  return EXIT_SUCCESS;
}

