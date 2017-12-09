/*
* autori.cpp
* Created by: Ugo Onuke
* 9 Dec 2017
* 21:41:01
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	cout<<s[0];
	for(int i = 1; i < s.length(); i++) {
		if(s[i] == '-') {
			cout<<s[i+1];
			i++;
		}
	}
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
