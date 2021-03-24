// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int r = size -1;
int l;
int s;
int r = -1;
int mid;
while (l <= r) {
mid = (l + r) / 2;
if (arr[mid] == value) s = mid;
if (value < arr[mid]) r = mid - 1;
else
l = mid + 1;
}
}
if (arr[s] == value) {
while (arr[s] == value) {
m++;
s++;
}
}
  return 0; // если ничего не найдено
}
