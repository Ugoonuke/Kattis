/*
* coldScience.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 16:44:34
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, count=0;
	cin>>n;
	int temp[n];
	for(int i = 0; i < n; i++) {
		cin>>temp[i];
		if(temp[i] < 0) count++;
	}
	cout<<count;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
