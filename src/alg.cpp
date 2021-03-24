// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int r = size -1;
int l;
int s = -1;
int e = 0;
int mid;
while (l <= r) {
mid = (l + r) / 2;
if (arr[mid] == value) s = mid;
if (arr[mid] < value) l = mid + 1;
else
r = mid - 1;
}
if (arr[s+1] == value) {
while (arr[s] == value) {
s++;
e++;
}
}
  return 0; // если ничего не найдено
}
