#include <iostream>
#include "bestPath.h"
using namespace std; 

bestPath::bestPath() : values(nullptr), sizes(nullptr){}

bool bestPath:: createMatrix(int order)
{
	cout << "creating matrix"<< endl; 
	matrix = new int*[order]; // allocating memory for rows
	cout << "matrix has been created"<< endl;
	
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



