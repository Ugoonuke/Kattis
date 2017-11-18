/*
* quadrantSelection.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 01:36:38
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x, y;
	cin>>x>>y;
	if(x > 0 && y > 0) cout<<1;
	if(x < 0 && y > 0) cout<<2;
	if(x < 0 && y < 0) cout<<3;
	if(x > 0 && y < 0) cout<<4;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
