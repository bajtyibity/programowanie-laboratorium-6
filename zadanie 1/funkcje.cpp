#include "funkcje.h"
#include "math.h"

double pole_kolo(int r)
{
	return r*r*M_PI;
} 

double pole_prostokont(int a,int b)
{
	return a*b;
}

double pole_trujkont(int a,int h)
{
	return 0.5*a*h;
}

double pole_szescian(int a)
{
	return 6*a*a;
}
double pole_walec(int r,int h)
{
	return 2*M_PI*r*r+2*M_PI*r*h;
}

double objetosc_kolo(int r)
{
	//nie ma dlatego podalem pole
	return r*r*M_PI;
} 

double objetosc_prostokont(int a,int b)
{
	//nie ma dlatego podalem pole
	return a*b;
}

double objetosc_trujkont(int a,int h)
{
	//nie ma dlatego podalem pole
	return 0.5*a*h;
}

double objetosc_szescian(int a)
{
	return a*a*a;
}

double objetosc_walec(int r,int h)
{
	return M_PI*r*r*h;
}