#include <stdio.h>

int sum(int x , int y);
int square(int z);
int is_positive(int v);
float sum_floats(float p , float q);
int find_max(int w , int t);
float celsius_to_fahrenheit(int C);

int main(){

	int a = 5;
	int b = 4;
	int c = 3;
	int d = -2;
	float e = 3.4;
	float f = 0.05;
	float C  = 5;
	
	printf("sum_ints is %d \n",sum(a , b));
	printf("square is %d \n" , square(c));
	printf("positive %d \n" , is_positive(d));
	printf("sum_floats is %f \n" , sum_floats(e , f));
	printf("The max is %d \n" , find_max(a , b));
	printf("celsius_to_fahrenheit is %f \n" , celsius_to_fahrenheit(C));

return 0;
}
