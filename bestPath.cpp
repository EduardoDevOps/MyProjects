#include <iostream>
#include <ctime>
#include "bestPath.h"
#include <iomanip>
using namespace std; 

bestPath::bestPath() : values(nullptr), sizes(nullptr){}

bool bestPath:: createMatrix(int order)
{
	cout << "creating matrix"<< endl; 
	matrix = new int*[order]; // allocating memory for rows
	cout << "matrix has been created"<< endl << endl; 
	
	for(int i=0; i< order; i++)
	{
		matrix[i] = new int[order]; //allocating memory for each row(columns) 
	}
		
	return true; 
}
void bestPath:: displayData()
{	
	int row, columns; 
	for( row= 0; row<10; row++)
	{
		for(columns= 0; columns < 10; columns++)
		{
			cout << matrix[row][columns]; 
		}
		cout << endl; 
	}
}

bool bestPath:: makeList()
{
	int row;  
	int column; 
	srand(time(0)); // seed the rand # with the current time 
	
	// generate a random number in the range [1, LIMIT]

	for(row =0; row <3; row++)
	{
		cout << setw(5); 
		for(column =0; column < 3; column++)
		{
			int random_number = rand() % LIMIT + 1; 
			matrix[row][column] = random_number;  
			cout << matrix[row][column] << setw(5); 
		}
		cout << endl; 
	}
	
	return true; 
}



