#include <iostream>
#include "knapsack.cpp"
using namespace std; 
int main()
{
	cout << "knapsack Project 1" << endl; 
	knapsack kp;
	cout << "About to store data..." << endl;
	bool isCreated = kp.createData("First_Batch.txt"); 
	cout << "Data has been allocated on the HEAP" << endl ;

	
	
}