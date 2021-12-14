#include "funkcje.h"
#include <iostream>

	using namespace std;
	
	bool czy_pierwsza(int n)
		{

		///////////////////////////
		int b=0;
		
		if(n==0||n==1)
			return 0;
		
		
		for(int i=2;i<n;i++)
		{
		
			if (n%i==0)
			{
			b=1;	
			break;
			};
		
			};
					if (b==0)
						return 1;
					if (b==1)
						return 0;
				////////////////////////////
			
		
		}
	
