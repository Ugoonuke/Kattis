/*
* batterUp.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 17:10:18
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int atBats=n;
	float  bases[n], sum=0.0;
	for(int i = 0; i < n; i++) {
		cin>>bases[i];
		if(bases[i] >= 0) sum+=bases[i];
		else atBats--;
	}
	cout<<sum/(float)atBats;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
