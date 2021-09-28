//============================================================================
// Name        : vector-sample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

class ABC{

public:

	int num=0;

	ABC()
	{

		cout<<"default constructor"<<endl;
	}


	ABC( const ABC &ref)
	{


		cout<<"copy constructor"<<endl;
	}


};


void fun(vector<ABC>&obj)
{
//vector<ABC>listobj1(obj);


}

int main() {

	vector<ABC>listvector;

	ABC ptr1;

	ptr1.num=10;
	listvector.push_back(ptr1);

	fun(listvector);

}
