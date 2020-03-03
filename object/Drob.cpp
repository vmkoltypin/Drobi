#include "Drob.h"
#include <iostream>

int Drob::evklid()
{
	int x = ch;
	int y = zn;
	while (x != y) {
		if (x > y) x -= y;
		else y -= x;
	}

	return x;
}

void Drob::setCh(int x)
{
	ch = x;
	int nod = evklid();
	ch /= nod;
	zn /= nod;
}

void Drob::setZn(int x)
{
	if (!x)throw("znZerro");
	zn = x;
	int nod = evklid();
	ch /= nod;
	zn /= nod;
}

int Drob::getCh()
{
	return ch;
}

int Drob::getZn()
{
	return zn;
}

Drob::Drob()
{
	ch = 0;
	zn = 1;
	cout << "empty constr\n";
}

Drob::Drob(int x, int y)
{
	if (!y)throw("znZerro");
	ch = x;
	zn = y;
	int nod = evklid();
	ch/= nod;
	zn /= nod;
	cout << "int constr\n";
}

Drob::Drob(const Drob& a)
{
	ch = a.ch;
	zn = a.zn;
	cout << "copy constr\n";
}

Drob::~Drob()
{
	cout << "destructor\n";
}

Drob& Drob::operator=(const Drob& a)
{
	cout << "operator=\n";
	this->ch = a.ch;
	this->zn = a.zn;
	return *this;
}

bool Drob::operator>(const Drob& a)
{
	if (ch * a.zn > a.ch* zn)
		return 1;
	else
		return 0;	
}

bool Drob::operator<(const Drob& a)
{
	if (ch * a.zn < a.ch* zn)
		return 1;
	else
		return 0;
}

bool Drob::operator==(const Drob& a)
{
	if (ch * a.zn == a.ch * zn)
		return 1;
	else
		return 0;
}

bool Drob::operator!=(const Drob& a)
{
	if (ch * a.zn != a.ch * zn)
		return 1;
	else
		return 0;
}



Drob Drob::operator+(const Drob& a)
{
	Drob h;
	h.ch = ch * a.zn + a.ch * zn;
	h.zn = zn * a.zn;
	int nodH = h.evklid();
	h.ch /= nodH;
	h.zn /= nodH;
	return h;
}

Drob Drob::operator-(const Drob& a)
{
	Drob h;
	h.ch = ch * a.zn - a.ch * zn;
	h.zn = zn * a.zn;
	int nodH = h.evklid();
	h.ch /= nodH;
	h.zn /= nodH;
	return h;
}

Drob Drob::operator*(const Drob& a)
{
	Drob h;
	h.ch = ch * a.ch;
	h.zn = zn * a.zn;
	int nodH = h.evklid();
	h.ch /= nodH;
	h.zn /= nodH;
	return h;
}

Drob Drob::operator/(const Drob& a)
{
	Drob h;
	h.ch = ch * a.zn;
	h.zn = zn * a.ch;
	int nodH = h.evklid();
	h.ch /= nodH;
	h.zn /= nodH;
	return h;
}

ostream& operator<<(ostream& os, const Drob& a)
{
	return os << a.ch << "/" << a.zn;
}

istream& operator>>(istream& os, Drob& a)
{
	return os >> a.ch >> a.zn;
}
