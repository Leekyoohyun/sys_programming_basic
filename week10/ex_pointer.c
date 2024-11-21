//
// Created by 이규현 on 2024. 11. 21..
//

#include <stdio.h>

//ex10-1
/* int main() {
  int num, *p;

  p = &num;
  *p = 5;

  printf("%p %d \n", &num, num);
  printf("%p %d %p \n", p, *p, &p);

  printf("sizeof(p) = %d \n", sizeof(p));
  printf("sizeof(*p) = %d \n", sizeof(*p));

  int x = 10;
  int *p2;
  p2 = &x;
  *p2 = 5;

  printf("%p %p %d %d \n", &x, p2, x, *p2);
  printf("%p \n", &p2);

  int *p3;

  printf("p3 = %p \n", p3);

  p3 = &x;

  printf("p3 = %p \n", p3);

  return 0;
}
 */

//ex
int main() {
  int first, second, *p;
  first = 50;
  second = 200;

  printf("&first = %p\n", &first);
  printf("&second = %p\n", &second);

  p = &first;

  printf("p = %p\n", p);
  printf("*p = %d\n", *p);

  *p += 50;

  printf("*p = %d\n", *p);
  printf("first = %d\n", first);

  p = &second;
  printf("*p = %d\n", *p);
  printf("first = %d\n", first);

  printf("%p \n", &(*p));
  printf("%p \n", &p);


  return 1;
}
