#include <iostream>
#include <fstream>
using namespace std;
static const int LIMIT = 50; 
static const int MINLEN = 3;
static const int MAXLEN = 1000; 

class knapsack 
{
	
	public: 
	knapsack(); 
	bool createData(const string& filename); 
	
	private:
		int itemCount; 
		int* values; 
		int* sizes; 
};
knapsack :: knapsack() : itemCount(0), values(nullptr), sizes(nullptr){
	cout << "Knapsack constructor" << endl; 
} 

bool knapsack:: createData(const string& filename)
{
	ifstream inputFile(filename); 
	if(!inputFile.is_open())
	{
		cout << "Error while opening File" << filename << endl; 
		return false; 
	}
	
	if (!(inputFile >> this -> itemCount))
	{
		cout << "Error reading ItemCount from File" << endl;  
		return false; 
	}
	cout << "Item Count is = " << this -> itemCount << endl;
	
	this -> values = new int[this->itemCount];
	this -> sizes = new int [this -> itemCount]; 
	
	
	int i = 0; 
	while (!(inputFile.eof()))
	{
		inputFile >> this->values[i] >> this->sizes[i]; 
		cout << this -> values[i] << "  " << this -> sizes [i] << endl;
		i++; 
	}
	
	/*for(int i=0; i < this->itemCount; i++)
	{
		inputFile >> this->values[i] >> this->sizes[i]; 
		cout << this -> values[i] << "  " << this -> sizes [i] << endl; 	
	}*/
	
	cout << "Closing file...." << endl ; 
	
	inputFile.close(); 
	return true; 
}

