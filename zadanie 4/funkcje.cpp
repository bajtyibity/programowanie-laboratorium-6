#include "funkcje.h"
long long int dwusilnia(int i)
{
	long long int wynik=1;
	
	while(i>1)
	{
		wynik*=i;
		i-=2;
	}
	
	return wynik;
}