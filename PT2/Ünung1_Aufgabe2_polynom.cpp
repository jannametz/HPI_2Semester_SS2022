#include <iostream>
#include <string>
#include <vector>
#include <math.h> //power() function 

double polynom(int x, int n, std::vector<int> vector)
{
	// ToDo: Exercise 2.b - compute value of P(x)
	double value { 0 };
	for (int i = n-1; i >=0; i--) {
     value = value + (vector[i] * pow(x,i));
	}
	return value;
}

void prettyPrint(double decimal)
{
	// ToDo: Exercise 2.c - print number with thousands separators to console
auto str = std::to_string(decimal);

/*traverse string until comma is found and delete string after and including 
concluded from given program output in the exercise sheet (nothing after 
comma)
*/
int index { 0 };
for (index; str[index] != '.'; index++) {
	;
}
str.erase(index, -1);
/*skip the last 3 digital and decrement index by 3 to correctly place
thousandes sperators
*/
int cntrl{ 0 };
for (index; index>0; index = index -3) {
     if (cntrl == 0){
         cntrl = 1;
		 continue;
	 }
    str.insert(index, ".");
}
std::count << str << std::endl; // << decimal
}

// input work via arguments, example from exercise sheet: x=10 n=4 a0=3 a1=4 a2=5 a3=6 =>
//.\polynom.exe 10 4 3 4 5 6 
int main(int argc, char* argv[])

// ToDo: Exercise 2.a - read parameters and x, deal with invalid values
//as arguments
if(argc <= 3) {
	std::count << "Too few arguments." << std::endl;
	return 0;
}
int x = std::stoi(argv[1]); //reading x
if (std::isdigit(x) == 1)
return 0;

int n = std::stoi(argv[2]); //reading n
if (std::isdigit(n) == 1)
if (n <= 0)
return 0;
//inizialize the vector and fill using the loop
int a{ 3 };
std::vector<int> v = {};
int i{ 4 };
for (i; i <= args; i++) {
	int tmp = std::stoi(argv[a]);
	if (std::isdigit(tmp)==1)
	return 0;
	if (tmp ==  0)
	return 0;
	v.push_back(tmp); // read each new coefficient in the vector array
    a++;
}
	// ToDo: Exercise 2.b - print P(x)
	// ToDo: Exercise 2.c - print P(x) with prettyPrint

	std::cout << polynom(x, n, v) << std::endl;
	prettyPrint(polynom(x, n, v));

	return 0;
}
