#include <iostream>

using namespace std;

int main()
{
	int* a = new int(45);
	int b = 33;
	a = &b;

	b = 55;
	a = new int(27);
	cout <<"*a: " <<*a << endl <<"b: " <<b <<endl;
	return 0;
}
