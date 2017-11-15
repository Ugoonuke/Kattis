/*
* 2048.cpp
* Created by: Ugo Onuke
* 13 Nov 2017
* 15:50:36
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size=4, grid[size][size], move;
	cout<<"Fill in the grid ("<<size<<","<<size<<")"<<endl;
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout<<"Row "<<i+1<<" | Column "<<j+1<<":\t";
			cin>>grid[i][j];
		}
	}
	cout<<"Grid"<<endl;
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter Move:\t0 - Left | 1 - Up | 2 - Right | 3 - Down"<<endl;
	cin>>move;
	switch(move) {
	// Left
	case 0:
		// Empty cells
		for(int i = 0; i < size; i++) {
			int col = size-1;
			while(col >= 0) {
				if(grid[i][col-1] == 0 && col > 0) { // Shift through all empty cells in row
					for(int j = col; j< size; j++) {
						grid[i][j-1] = grid[i][j];
					}
					grid[i][size-1] = 0;
					col--;
				}
				else col--;
			}
		}
		// Combine same numbers
		for(int i = 0; i < size; i++) {
			int col = 0;
			while(col < size) {
				if(grid[i][col] == grid[i][col+1] && col < size-1) { // If same numbers
					grid[i][col] += grid[i][col+1];
					for(int j = col+1; j < size-1; j++) { // Shift all cells to left
						grid[i][j] = grid[i][j+1];
					}
					grid[i][size-1] = 0;
					col++;
				}
				else col++;
			}
		}
		cout<<"Move Left"<<endl;
		break;
	// Up
	case 1:
		// Empty cells
		for(int i = 0; i < size; i++) {
			int col = size-1;
			while(col >= 0) {
				if(grid[col-1][i] == 0 && col > 0) { // Shift through all empty cells in row
					for(int j = col; j< size; j++) {
						grid[j-1][i] = grid[j][i];
					}
					grid[size-1][i] = 0;
					col--;
				}
				else col--;
			}
		}
		// Combine same numbers
		for(int i = 0; i < size; i++) {
			int col = 0;
			while(col < size) {
				if(grid[col][i] == grid[col+1][i] && col < size-1) { // If same numbers
					grid[col][i] += grid[col+1][i];
					for(int j = col+1; j < size-1; j++) { // Shift all cells to left
						grid[j][i] = grid[j+1][i];
					}
					grid[size-1][i] = 0;
					col++;
				}
				else col++;
			}
		}
		cout<<"Move Up"<<endl;
		break;
	// Right
	case 2:
		// Empty cells
		for(int i = 0; i < size; i++) {
			int col = 0;
			while(col < size) {
				if(grid[i][col+1] == 0 && col < size-1) { // Shift through all empty cells in row
					for(int j = col; j >= 0; j--) {
						grid[i][j+1] = grid[i][j];
					}
					grid[i][0] = 0;
					col++;
				}
				else col++;
			}
		}
		// Combine same numbers
		for(int i = 0; i < size; i++) {
			int col = size-1;
			while(col > 0) {
				if(grid[i][col] == grid[i][col-1] && col > 0) { // If same numbers
					grid[i][col] += grid[i][col-1];
					for(int j = col-1; j > 0; j--) { // Shift all cells to left
						grid[i][j] = grid[i][j-1];
					}
					grid[i][0] = 0;
					col--;
				}
				else col--;
			}
		}
		cout<<"Move Right"<<endl;
		break;
	// Down
	case 3:
		// Empty cells
		for(int i = 0; i < size; i++) {
			int col = 0;
			while(col < size) {
				if(grid[col+1][i] == 0 && col < size-1) { // Shift through all empty cells in row
					for(int j = col; j >= 0; j--) {
						grid[j+1][i] = grid[j][i];
					}
					grid[0][i] = 0;
					col++;
				}
				else col++;
			}
		}
		// Combine same numbers
		for(int i = 0; i < size; i++) {
			int col = size-1;
			while(col > 0) {
				if(grid[col][i] == grid[col-1][i] && col > 0) { // If same numbers
					grid[col][i] += grid[col-1][i];
					for(int j = col-1; j > 0; j--) { // Shift all cells to left
						grid[j][i] = grid[j-1][i];
					}
					grid[0][i] = 0;
					col--;
				}
				else col--;
			}
		}
		cout<<"Move Down"<<endl;
		break;
	default:
		cout<<"INVAID MOVE!!!\n\nProgram Terminated..."<<endl;
		return 0;
	}
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
