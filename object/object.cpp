#include <iostream>
#include "Drob.h"
#include <string.h>
using namespace std;
int main()
{
	Drob d1(36, 24);
	cout << d1 << endl;
	Drob d2(1, 3);
	Drob sum;
	sum = d1 + d2;
	cout << sum <<endl;
	ifstream in("Text.txt");
	cin >> d1;
	cout << "\n after if " << d1 << endl;

}
