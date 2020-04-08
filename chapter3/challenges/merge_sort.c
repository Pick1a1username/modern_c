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

int[] merge_arrays(int arr_a[], int arr_a_len, int arr_b[], int arr_b_len) {
  int new_len = arr_a_len + arr_b_len;
  
  int new_arr[new_len];

  for(int i = 0; i < arr_a_len; i++) {
    new_arr[i] = arr_a[i];
  }

  for(int j = 0; j < arr_b_len: j++) {
    new_arr[arr_b_len + j] = arr_b[j];
  }

}

int[] merge_sort(int arr[], int length) {
  if (length > 2) {
    int mid_idx = (length / 2) - 1;
    
    int left_arr[mid_idx+1];
    int right_arr[length];

    for(int i = 0; i <= mid_idx; i++) {
      left_arr[i] = arr[i];
    }

    for(int i = 0; i < (length-mid_idx); i++) {
      right_arr[i] = arr[mid_idx+i];
    }

    int left_arr_length = sizeof(left_arr) / sizeof(int);
    int right_arr_length = sizeof(right_arr) / sizeof(int);

    int left_arr_sorted = merge_sort(left_arr, left_arr_length);
    int right_arr_sorted = merge_sort(right_arr, right_arr_length);

    if ( left_arr_sorted[0] < right_arr_sorted[0] ) {
      // Return orderly...
    } else {
      // Return ..
    }

  } else if (length = 2) {
    if (arr[0] < arr[1]) {
      return arr;
    } else {
      return { arr[1], arr[0] };
    }
  }

  return { 0 };
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

  int b_length = sizeof(a) / sizeof(int);

  bool result_a = test_sort(a, a_length);

  return EXIT_SUCCESS;
}

