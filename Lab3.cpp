//Victor Anthony
//Lab 03


#include <iostream>
#include <iomanip>
#include <cfloat>


using namespace std;



short sum_Short(short n)

{

	short sum = 0;

	short i = 1;

	while (i <= n){
		sum = sum + i;
		i++;
	}

	return sum;
}


long sum_Long(long n){
	long sum = 0;
	long i = 1;
	
	while (i <= n){
		sum = sum + i;
		i++;
	}

	return sum;
}

float product_float(long n){
	float product = 1;
	long i = 1;

	while (i <= n){
		product = product * i;
		i++;
	}

	return product;

}

double doubprod(long n){
	double product = 1;
	long i = 1;

	while (i <= n){
		product = product * i;
		i++;
	}

	return product;
}

float f0(int n){
	float sum = 0;
	float i = 1;

	while (i <= n){
		float inversen = 1 / (float)n;
		sum = sum + inversen;
		i++;
	}

	return sum - 1;
}

double f1(int n){
	double sum = 0;
	double i = 1;

	while (i <= n){

		double inversen = (1 / (double)n);
		sum = sum + inversen;
		i++;
	}

	return sum - 1;
}



int main(){

	//1: The n value is 249 and the sum is 31,125.

	short n = 249;

	cout << "The sum of the first " << n << " numbers is " << sum_Short(n) << endl;

	//1: The n value is 255 and the sum is 32,640.

	n = 255;

	cout << "The sum of the first " << n << " numbers is " << sum_Short(n) << endl;

	//2: The overflow error is at 256 for short i.e. negative sum.

	n = 256;

	cout << "The sum of the first " << n << " numbers is " << sum_Short(n) << endl;

	//Ans 3: The n  value is 9,594,478 and the sum is 2,139,299,545.In this case too, the overflow is detected when the sum turns negative.

	long x = 9594478;

	cout << "The sum of the first " << x << " numbers is " << sum_Long(x) << endl;

	//The overflow error is at 9,594,479 for long.

	x = 9594479;

	cout << "The sum of the first " << x << " numbers is " << sum_Long(x) << endl;

	//Ans 4: The overflow occurs when the product returns 'inf'.

	long a = 34;

	cout << "The product of the first " << a << " numbers is " << product_float(a) << endl;

	// The overflow is caused by value of 35

	a = 35;

	cout << "The product of the first " << a << " numbers is " << product_float(a) << endl;

	//Ans 5: The overflow is also detected when the product returned is 'inf'.

	long m = 170;

	cout << "The product of the first " << m << " numbers is " << doubprod(m) << endl;

	// The overflow is caused by value of 171

	m = 171;

	cout << "The product of the first " << m << " numbers is " << doubprod(m) << endl;

	//Ans 6: The expected result of the sigma (i = 1 to i =n)[1/n] - 1.0 is 0.

	long o = 9;

	cout << "The sum of inverse of first " << o << " numbers subtracted by one is " << f0(o) << " (float)" << endl;

	/** Because the computer cannot store the decimal exactly in binary, there are some approximations.

	 When the fraction is stored in float, the value of the function is still zero until 9. Once n = 10, the value is no longer zero.

	 This is because as the n value increases, the number of copies added also increases. This in turn adds up the error in all the copies. **/

	o = 10;

	cout << "The sum of inverse of first " << o << " numbers subtracted by one is " << f0(o) << " (float) " << endl;



	long q = 5;

	cout << "The sum of inverse of first " << q << " numbers subtracted by one is " << f1(q) << " (double) " << endl;

	// When the fraction is stored in a double, the precision increases. Therefore the computer can find more doubles in binary closer to the overall error than zeros.

	q = 6;

	cout << "The sum of inverse of first " << q << " numbers subtracted by one is " << f1(q) << " (double) " << endl;



	for (float i = 3.4; i< 4.4; i += 0.2){
		cout << "i = " << i << endl;
	}

	//7: We see the loop printing 4.4 here, because when we declare float i = 3.4, we are assigning a double to a float data type.


	for (double i = 3.4; i<4.4; i += 0.2){
		cout << "i = " << i << endl;
	}

	//8: Since the data type double takes up more memory, it is able to store the value with more accuracy, and precision. 


}

