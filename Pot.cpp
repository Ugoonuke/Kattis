/*
* pot.cpp
* Created by: Ugo Onuke
* 4 Dec 2017
* 23:37:12
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int p[n], total = 0;
	for(int i = 0; i < n; i++) {
		cin>>p[i];
		total += (pow((p[i]/10),(p[i]%10)));
	}
	cout<<total;
	//cout<<"\nEclipse C++"<<endl;
	return 0;
}
