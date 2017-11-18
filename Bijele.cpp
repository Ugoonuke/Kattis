/*
* Bijele.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 16:58:10
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n=6, set1[n] = {1,1,2,2,2,8}, set2[n];
	for(int i = 0; i < n; i++) {
		cin>>set2[i];
		cout<<(set1[i]-set2[i])<<" ";
	}
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
