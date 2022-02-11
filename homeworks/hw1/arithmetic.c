//jlajoie2
//jameson lajoie

#include<stdio.h>

int main(void) {
  printf("Please enter an arithmetic expression using * and / only:\n");
  

  char op;
  float num;
  float result;
  int scanner;
  if (scanf(" %f", &result) != 1) {
    printf("malformed expression\n");
    return 1;
  }
    
  while ((scanner = (scanf(" %c %f",&op, &num))) == 2) {

    // switch(op) {

    // case '/':
    /* if (num == 0){
        printf("division by zero\n");
        break;
      }
      else {
      result = result / num;
      }
      break;

    case '*':
      result = result * num;
      break;

    default:
      printf("malfor
      }*/
    if (op == '/') {
      //check for division by 0
      if (num == 0){
    	printf("division by zero\n");
        return 2;
    }
      result = result / num;  
    }
    else if (op == '*') {
      result = result * num;
    }
    else {
      printf("malformed expression\n");
      return 1;
    }
    
    }
    if (scanner != 2 && scanner != EOF) {
      printf("malformed expression\n");
      return 1;
    }
    printf("%f\n",result);
    return 0;
}
