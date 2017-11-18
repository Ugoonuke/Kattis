/*
* Oddities.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 15:21:31
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int num[n];
	for(; n > 0; n--) {
		cin>>num[n-1];
		if(num[n-1]%2 == 0) cout<<num[n-1]<<" is even";
		else cout<<num[n-1]<<" is odd";
	}
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
