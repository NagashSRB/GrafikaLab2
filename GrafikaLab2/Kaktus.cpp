#include "pch.h"
#include "Kaktus.h"

//a, r const

void Kaktus::update(double angle) {
	this->angle = angle;
	double temp = (a / 2 + r - d);
	double prevCoordx, prevCoordy;
	if (prev == nullptr)
	{
		prevCoordx = xsaksija; 
		prevCoordy = ysaksija;
	}
	else 
	{
		prevCoordx = this->prev->xp; 
		prevCoordy = this->prev->yp;
	}
	this->xk = temp * cos(this->angle) + prevCoordx;	    //X za krug
	this->yk = temp * sin(this->angle) + prevCoordy;        //Y za krug
	this->xp = temp * cos(this->angle) + this->xk;          //X za pravougaonik
	this->xp = temp * cos(this->angle) + this->xk;          //Y za pravougaonik

	for (int i = 0; i < this->n; i++)
		if (this->next[i] != nullptr)
			this->next[i]->update(this->angle + constUgao[i]);
}

Kaktus::Kaktus(int x) {
	this->n = x;
	//slika string const
}
