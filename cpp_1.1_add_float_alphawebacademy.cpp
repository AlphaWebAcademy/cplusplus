// Jyothi Jeyakumar from Alpha Web Academy
#include<stdio.h>
// #include<conio.h>  
int main() {
 float num1, num2, sum; // if it is 32-bit system 6 bytes will be allotted 
 //for 64-bit system 12 bytes will be allotted
 // int a,b,c;   // int number1,number2, total;
 // clrscr();    // clrscr() no need in Dev C++ Compiler
 //if you want to read data from enduser
 printf("\nEnter First No: \t");
 scanf("%f", &num1);  // & => address operator

 printf("\nEnter Second No:\t");
 scanf("%f", &num2);

 sum =  num1 + num2;

 printf("\n\nThe sum of two given numbers is %0.2f\n\n",sum);
 //getch();  //it read a character from the enduser but it doesn't echo on screen
 return 0;
}
