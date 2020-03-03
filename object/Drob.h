#pragma once
#include <fstream>

using namespace std;
class Drob
{
private:
	int ch;
	int zn;
	int evklid();
public:
	void setCh(int x);
	void setZn(int x);
	int getCh();
	int getZn();
	Drob();
	Drob(int x, int y);
	Drob(const Drob& a);
	~Drob();
	Drob& operator=(const Drob& a);
	bool operator>(const Drob& a);
	bool operator<(const Drob& a);
	bool operator==(const Drob& a);
	bool operator!=(const Drob& a);
	Drob operator+(const Drob& a);
	Drob operator-(const Drob& a);
	Drob operator*(const Drob& a);
	Drob operator/(const Drob& a);
	friend ostream& operator <<(ostream& os, const Drob& a);
	friend istream& operator >>(istream& os,  Drob& a);
};

