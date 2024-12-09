// Augustus Gullett
// CIS 1202.501
// 12/8/2024
// I was starting to like this chapter and then C++ got upset
// because throw "wow" hands off a c-string ...

// This time all the functions will be here. A header for one function is silly.
#include <iostream>
using namespace std;

template <typename T>
T half(T single_argument) {
	T v = static_cast<T>(2); // literally just change 2 between types (double, short, float, int, etc)
	if (is_same<T, int>::value) // unelegant solution to rounding ints (ugh)
		return round(single_argument / 2.0f); // prevent type coercing at first
	else // this is not ok.
		return single_argument / v; // return Single Argument divided by V; wait, this is Enlgihs.
}

int main() {
	//driver! what? without a driving license?! hmm... renew(license); ok we can drive now
	double a = 132.93;
	float b = 3.0f;
	int c = 7;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}