//jlajoie2
//jameson lajoie

#include<stdio.h>

// The main section of the code arithmetic.c to take a user inputted arithmetic and output the result.
int main(void) {
  printf("Please enter an arithmetic expression using * and / only:\n");
  
  //declare var
  char op;
  float num;
  float result;
  int scanner;
  // check first char input and test its validity
  if (scanf(" %f", &result) != 1) {
    printf("malformed expression\n");
    return 1;
  }
  //while loop to continue taking input from the user
  while ((scanner = (scanf(" %c %f",&op, &num))) == 2) {

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
  //check if input from the user that did not pass through the while loop is valid
    if (scanner != 2 && scanner != EOF) {
      printf("malformed expression\n");
      return 1;
    }
    //print results  
    printf("%f\n",result);
    return 0;
}
