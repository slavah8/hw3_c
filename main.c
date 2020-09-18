#include <readline/readline.h>
#include <stdlib.h>
#include <stdio.h>

int digit_sum(int n){
  if (n == 0)
    return n;
  else
    return (n % 10 + digit_sum(n/10));
    
  }
int main(void) {
  char *userInput = readline("Enter an int: ");
  int askInt = atoi(userInput);
  printf("sum of digits of %d is %d\n", askInt, digit_sum(askInt));
}