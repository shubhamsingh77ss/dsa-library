//example program to demonstrate scope error in C
#include<stdio.h>
  void main()
  {
      int first();
      void second();
      printf("The scope of variable\n");
      first();
      second();
  }
  int first()
  {
      int a=900;
  }
  void second()
  {
      printf("%d",a);
  }
  //here you can see that theres is an error
