/* bsp10006.cpp */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int var1;
	float var2;
	double var3;

	var1=4;
	var2=7.3;
	var3=var1+var2;
	cout << "\n" << var3;
	var3=var1+int(var2);
	cout << "\n" << var3 << "\n";
	return 0;
}