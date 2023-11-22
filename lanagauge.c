//starting from the scratch to the end 
.......................................................................
# include <stdio.h>
int main () {
  printf("Hello World !!");
  return 0;
}
//................................................

Result Size: 753 x 560
int main () {
  int mynum = 25;
  float myfloat = 1.23;
  double mydouble = 19.23;
  char myvalue = "A";
  char data [] = "Hello Guys welcome to the Classs";
  printf("The value of mynum: %d\n",mynum);
  printf("The value of mynum: %f\n",myfloat);
  printf("The value of mynum: %lf\n",mydouble);
  printf("The value of myvalue: %c\n",myvalue);
  printf("The value of mydata: %s",data);
  return 0;
}
Data  Type	Size	Description
int	= 2 or 4 bytes => 	Stores whole numbers, without decimals
float	= 4 bytes	 => Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double = 	8 bytes	=> Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char =	1 byte	=> Stores a single character/letter/number, or ASCII values


//if want the number after decimals

int main () {
   int x = 3.12;
  printf("%d\n",x);
  printf("%d.1\n",x);
  printf("%d.2\n",x);
  printf("%d.3",x);
  return 0 ;
}

// C type conversion 
// 1. implicit (automatically)
// 2. explicit (mannual)

Implicit conversion is done automatically by the compiler when you assign a value of one type to another.
For example, if you assign an int value to a float type
int main () {
float x = 9;
  printf("%f",x);  // convert the value int into float
  return 0;
}
.....
#include <stdio.h>
int main() {
  float sum = 5 / 2;
  printf("%f", sum);  // 2.000000
  return 0;
}
Explicit example :-
  #include <stdio.h>

int main() {
  // Manual conversion: int to float
  float sum = (float) 5 / 2;

  printf("%f", sum);
  return 0;
}
......
  int main () {
    int x =10;
    int y = 3;
    float sum = (float) x/y;
    printf("The devision is %.1f",sum);
    return 0;
}
......................................................................
  C Constatnt
-----------------------------------------------------------------
  
#include <stdio.h>
int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}




















  




