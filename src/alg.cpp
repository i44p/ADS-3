// Copyright 2021 NNTU-CS

int search_leftmost(int* arr, int value, int left, int right) {
  if (left > right) {
    return -1;
  }

  int cursor = (left + right) / 2;

  if (arr[cursor] == value) return cursor;
  if (arr[cursor] < value) {
    return search_leftmost(arr, value, cursor + 1, right);
  }
  return search_leftmost(arr, value, left, cursor);
}

int cbinsearch(int* arr, int size, int value) {
  int left = search_leftmost(arr, value, 0, size - 1);
  int right = left;
  while (arr[right] == value) right++;
  return right - left;
}
