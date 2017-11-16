/*
* Ugo_C++_Solution.cpp
* Created by: Ugo Onuke
* 3 Nov 2017
* 09:27:26
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int size, tsize = 0;
	cin>>size; // Save number of elements in first group of strings to be sorted
	vector<string> sorted; // Vector to be used to store the sorted strings
	while(size != 0) { // Program will run until 0 is entered
		string unsorted[size]; // Create string array to be sorted
		for(int i = 0; i < size; i++) {
			int index = i; // Current element position populated in string array
			cin>>unsorted[i]; // Populate an element of unsorted array
			while(index > 0 && ((unsorted[index].at(0) < unsorted[index-1].at(0)) || ((unsorted[index].at(0) == unsorted[index-1].at(0)) && (unsorted[index].at(1) < unsorted[index-1].at(1))))) {
				// Test if first character of string is smaller than the previous strings one OR if they equal then test if the second character is smaller than the previous strings one
				string temp = unsorted[index]; // If above statement is true then swap the elements around
				unsorted[index] = unsorted[index-1];
				unsorted[index-1] = temp;
				index--; // Move back one element and test again
			}
		}
		tsize += size+1; // Keep track of the size of vector list
		for(int i = 0; i < size; i++) {
			sorted.push_back(unsorted[i]); // Populate vector list
		}
		sorted.push_back(""); // Separate the groups of strings
		cin>>size; // Save the number of elements in the next group of string
	}
	for(int i = 0; i < tsize; i++) {
		cout<<sorted[i]<<endl; // Print out the finished vector list
	}
	return 0;
}
