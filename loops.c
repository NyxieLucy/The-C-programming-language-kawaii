#include <stdio.h>
int main() {
  int age = 6;
  do {
    printf("oh hell naw, you can't aquire a debit card, you're only %d\n", age);
    age++;
  } while (age < 18);
  printf("alright you're %d, you're good to have one", age);
  return 0;
}
