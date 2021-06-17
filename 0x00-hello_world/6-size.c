#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Sucess)
*/
int main(){
  int inttype;
  float floattype;
  long int longtype;
  long long int longlongtype;
  char chartype;
  printf("Size of char:", sizeof(chartype));
  printf("Size of an int:", sizeof(inttype));
  printf("Size of long int:", sizeof(longtype));
  printf("size of long long int:", sizeof(longlongtype));
  printf("Size of float:", sizeof(floattype));
  return(0);
}
