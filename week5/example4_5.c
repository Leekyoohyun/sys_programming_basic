//
// Created by 이규현 on 2024. 10. 10..
//
#include <stdio.h>

int showMenu() {
  int choice;
  printf("Press 1 to add.\n2 to subtract.\n3 to exit\n");
  scanf("%d", &choice);
  return choice;
}

int main(){
  int selection;

  selection = showMenu();
  printf("%d.\n",selection);

  return selection;
}