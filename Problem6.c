//
// Created by SUBRATA on 14/10/2024.
//
int sum(int n);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int n) {
  if (n > 0) {
    return n + sum(n - 1);
  } else {
    return 0;
  }
}