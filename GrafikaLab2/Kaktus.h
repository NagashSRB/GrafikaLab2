#pragma once

const double a = 30;
const double r = 30;
const double d = 30;
const double xsaksija = 0;
const double ysaksija = 0;
const double pi = 0;
const double constUgao[] = { pi / 4, 0, - pi / 4};

class Kaktus
{
public:
	int n;
	Kaktus** next;
	Kaktus* prev;
	double angle=0;
	double xk, yk, xp, yp;
	double b;

	Kaktus(int x);
	void update(double angle);

	//1 1 3 1 0 2 0 3 0

};

