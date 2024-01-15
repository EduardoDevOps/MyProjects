#include <iostream>
using namespace std;

class bestPath
{
	public:
	bestPath();  
	bool makeList(); 
	void displayData(); 
	bool createMatrix(int);
	int bestBF(); 
	int bestDY(); 
	
	private: 
	int static const LIMIT = 50;
	int static const MINLEN = 3;
	int static const MAXLEN = 1000; 
	int itemCount; 
	int* values; 
	int* sizes; 
	int** matrix; 
	int bestREC(int, int); 
	
};