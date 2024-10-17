//
// Created by 이규현 on 2024. 10. 17..
//
// 3항 연산자.

int main() {
  int a = 5;
  int b = 2;
  int larger;

  // Use "if" loop
  if(a<b)
    larger = a;
  else
    larger = b;

  // Use Ternary Operator
  larger = (a>b) ? a : b;
  // or
  a > b ? larger = a : (larger = b);

  return 0;
}