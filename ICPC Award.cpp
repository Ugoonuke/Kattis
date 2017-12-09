/*
* icpc.cpp
* Created by: Ugo Onuke
* 9 Dec 2017
* 20:17:28
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, size = 0, max = 12;
	cin>>n;
	string rank, uni;
	string list[max], un[max] = "";
	for(int i = 0; i < n; i++) {
		cin>>uni>>rank;
		for(int j = 0; j <= size; j++) {
			if(un[j] == uni) break;
			else if(j == size){
				un[j] = uni;
				cout<<uni<<" "<<rank<<endl;
				size++;
				break;
			}
		}
		if(size == max) break;
	}
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
