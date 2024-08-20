// Alpha Web Academy - Sample program 
// to find the biggest no from the given array elements
#include<stdio.h>
#include<conio.h>
int main(){
  int num[50], i, n, big;
  printf("\nEnter, How many numbers, Do you have?  "); 
  scanf("%d", &n);    //5   
  // Store the given value into an array num
  for(i=0; i<n; i++){
     printf("\nEnter value %d: ", i+1); //0+1  1+1  2+1
     scanf("%d", &num[i]);
  }
  
  big = num[0];  // Assume first element as a biggest element
  
  // Then traverse and check from the index 1 to n-1
  printf("\nBiggest Value in an array:\n");
  printf("--------------------------\n");
  for(i=1; i<n; i++){
  	if ( big < num[i] ){
  		big = num[i];	
	}
  }
  printf("The biggest value is %d\n\n\n", big);
  return 0;
}

