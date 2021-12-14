#include <iostream>
#include <string>
#include "funkcje.h"

using namespace std;

int fbintodec(std::string a)
{
	int n=1,suma=0;
	
	for(int i=a.length();i>0;i--)
	{
	suma+=(a[i-1]-'0')*n;
	n*=2;
	}
	
	return suma;
}