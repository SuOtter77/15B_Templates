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
	return single_argument / v; // return Single Argument divided by V; wait, this is Enlgihs.
	//apparently I can type whatever i want right here, hello! sorry compiler... 
		// nevermind HAHA
}

int main() {
	//driver! what? without a driving license?! hmm... renew(license); ok we can drive now
	double a = 132.93;
	float b = 3.0f;
	int c = 12;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	// btw, you can't round with a template function. it would end up returning an int for a double. You get the point. The type coercion from V is enough, even if it cuts it down to 1 instead of 2 from 1.75. That's ok, we're not rocket scientists here.
}