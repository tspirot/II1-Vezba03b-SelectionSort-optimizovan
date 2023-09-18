// Vezba03b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Sortiranje - Selection sort - optimalna nova verzija	
#include <stdio.h>
int main()
{
	// nesortirani niz
	int niz[10] = { 5, 2, 7, 4, 1, 9, 3, 8, 6, 10 };
	int i, j, temp, jmin; // i-levi element (prvi u nesortiranom delu), j-desni element
	int n = 10; // broj elemenata niza
	for (i = 0; i < n-1; i++)// do pretposlednjeg elementa
	{
		jmin = i; // jmin indeks najmanjeg u nesortiranom delu
		for ( j = i+1; j < n; j++) //desno od i-tog
		{
			if (niz[jmin] > niz[j]) // ako je j-ti manji od jmin
			{
				jmin = j;
			}
		}
		temp = niz[i]; // zameni i-ti sa jmin
		niz[i] = niz[jmin];
		niz[jmin] = temp;
	}
	// ispis sortiranog niza
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}

