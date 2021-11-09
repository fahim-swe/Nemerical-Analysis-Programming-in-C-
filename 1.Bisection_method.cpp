#include <bits/stdc++.h>
using namespace std;

// define the function here, given to the equation f(x)
double f(double x)
{
	double y =  x*x-4.0; // f(x) = x^2 - 4
	return y;
}


int main()
{
	double a, b, e;

	Again_try:
		cout << "Enter the initial guesses: \n";
		cout << "a = ";
		cin>>a;
		cout << "b = ";
		cin>>b;
		cout << "Enter the degree of accuracy desired: ";
		cin>> e;


		int iter = 0;

		if(f(a)*f(b) > 0) // Check if a root exits between a and b
		{
			// if f(a)*f(b) > 0 then the root does not exits between a and b
			cout << "Root Does not exits between " << a << " " << b << endl;
			cout << "Plz enter a different initial guess\n";
			goto Again_try;
		}
		else{
			cout << "Itr" << setw(18) << "a" << setw(18) << "b" << setw(18) << "c" << setw(18) << "f(c)" << setw(18) << "|a-b|\n";
			cout << "---------------------------------------------------------------------------------------------------------\n";


			double c;
			while(abs(a-b) >= e){

				c = (a+b)/2.0;
				iter++;

				if(f(c) == 0){
					break;
				}
				cout << " " <<  iter << setw(18) << a << setw(18) << b << setw(18) << c << setw(18) << f(c) << setw(18) << abs(a-b) << "\n";

				if(f(a)*f(c) > 0){
					a = c;
				}
				else{
					b = c;
				}

			}


			cout << "\n\n";
			cout << "The Root of the Equation is " << c << "\n";
		}	
}







/*

For f(x) = x^2 - 4;



Enter the initial guesses: 
a = 1
b = 2
Enter the degree of accuracy desired: 0.0001
Itr                 a                 b                 c              f(c)            |a-b|
---------------------------------------------------------------------------------------------------------
 1                 1                 2               1.5             -1.75                 1
 2               1.5                 2              1.75           -0.9375               0.5
 3              1.75                 2             1.875         -0.484375              0.25
 4             1.875                 2            1.9375         -0.246094             0.125
 5            1.9375                 2           1.96875         -0.124023            0.0625
 6           1.96875                 2           1.98438        -0.0622559           0.03125
 7           1.98438                 2           1.99219         -0.031189          0.015625
 8           1.99219                 2           1.99609        -0.0156097         0.0078125
 9           1.99609                 2           1.99805       -0.00780869        0.00390625
 10           1.99805                 2           1.99902        -0.0039053        0.00195312
 11           1.99902                 2           1.99951       -0.00195289       0.000976562
 12           1.99951                 2           1.99976      -0.000976503       0.000488281
 13           1.99976                 2           1.99988      -0.000488266       0.000244141
 14           1.99988                 2           1.99994      -0.000244137        0.00012207


The Root of the Equation is 1.99994




Enter the initial guesses: 
a = 1
b = 4
Enter the degree of accuracy desired: 0.001
Itr                 a                 b                 c              f(c)            |a-b|
---------------------------------------------------------------------------------------------------------
 1                 1                 4               2.5              2.25                 3
 2                 1               2.5              1.75           -0.9375               1.5
 3              1.75               2.5             2.125          0.515625              0.75
 4              1.75             2.125            1.9375         -0.246094             0.375
 5            1.9375             2.125           2.03125          0.125977            0.1875
 6            1.9375           2.03125           1.98438        -0.0622559           0.09375
 7           1.98438           2.03125           2.00781          0.031311          0.046875
 8           1.98438           2.00781           1.99609        -0.0156097         0.0234375
 9           1.99609           2.00781           2.00195        0.00781631         0.0117188
 10           1.99609           2.00195           1.99902        -0.0039053        0.00585938
 11           1.99902           2.00195           2.00049        0.00195336        0.00292969
 12           1.99902           2.00049           1.99976      -0.000976503        0.00146484


The Root of the Equation is 1.99976



*/