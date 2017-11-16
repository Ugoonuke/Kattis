/*
* Tarifa.cpp
* Created by: Ugo Onuke
* 16 Nov 2017
* 11:50:35
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int broad, n, tarifa, sum = 0;
	cin>>broad, cin>>n;
	int usage[n];
	for(int i = 0; i < n; i++) {
		cin>>usage[i];
		sum+= usage[i];
	}
	tarifa = (broad*(n+1))-sum;
	cout<<tarifa<<endl;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
