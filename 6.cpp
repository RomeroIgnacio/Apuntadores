#include <iostream>

using namespace std;

int main()
{
	int* a = new int(45);
	int b = 33;
	a = &b;
	cout <<"*a: " <<*a << endl <<"b: " <<b <<endl;
	return 0;
}
