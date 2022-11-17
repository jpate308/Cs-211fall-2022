// Collaborative code file, Lab 13
// 
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing 
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this code!
// 
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
// 
// An example is shown below.
// 
// UIC CS 211, Fall 2022
#include <stdio.h>

void reed_ekidan2() {
  printf("Dale Reed and Ellen Kidane\n");
  printf("We learned that git and GitHub are amazing, powerful tools!\n");
}
void jpate308_sbane4(int *choice){
  printf("Jash Patel and Srijita Banerjee\n");
  printf("We have learnt some basic commands which are used across GIThub and also github is best used for version control of your program\n");

  int num1=0, num2=0;
  printf("Enter 2 integers\n");
  scanf("%i",&num1);
  scanf("%i",&num2);

  switch(*choice) {
    case 1: printf("Sum = %i\n",(num1+num2)); break;
    case 2: printf("Difference = %i\n",(num1-num2)); break;
    case 3: printf("Product = %i\n",(num1*num2)); break;
    case 4: printf("Division = %i\n",(num1/num2)); break;
    default: printf("Invalid choice\n"); break;
  }
}

int main()
{
    printf("This code has been created by Srijita Banerjee and Jash Patel of CS 211, Fall 2022!\n\n");
    
    //reed_ekidan2();
    int choice=0;
    printf("Enter your choice 1-4!\n");
    scanf("%i",&choice);
    jpate308_sbane4(&choice); 
    
    return 0;
}
