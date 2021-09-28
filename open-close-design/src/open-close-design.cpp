//============================================================================
// Name        : open-close-design.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;


enum class color{ orange, green,blue};
enum class size{ small, medium,large};

class product{

public:
	string name;
	color _iColour;
	size _isize;


};



//Specification for each item to be filtered for.Example colour, size
template<typename T>
class specification{

public:
	virtual bool is_satisfied(T *item)=0;
};



class ColourSpecification:public specification<product>
{

public:
color _ispeccolor;

	ColourSpecification(color _icolour):_ispeccolor(_icolour)
	{


	}

	bool is_satisfied(product *item)
	{

		return (item->_iColour ==_ispeccolor);
	}

};


//Each product has to be filtered wrt above specification
template<typename T>
class Filter{

public:
	virtual vector<T*>filter(vector<T*>items, specification<T> &spec)=0;



};

//Class template inheritance

class ProductFilterCommon: public Filter<product>
{

public:

	vector<product*>filter(vector<product*>items, specification<product>&spec)
	{

		vector<product*>result;

			for(auto singleitem:items)
			{

				if(spec.is_satisfied(singleitem))
				{

					result.push_back(singleitem);
				}

			}

			return result;
	}


};


int main() {
product apple{"apple",color::green,size::small};
product orange{"orange",color::orange,size::medium};
product blue{"blue",color::blue,size::large};

vector<product*>product_container{&apple,&orange,&blue};


ColourSpecification colorspec(color::green);
ProductFilterCommon productfilter;

//Here we are passing the derived class reference.So that the corresponding implementation will be caught by the filter class.
//we cannot send it as a value, which needs the base class to be implemented the is_catisfied function.

vector<product*>productList=productfilter.filter(product_container, colorspec);


for(auto& result_item:productList)
{

	cout<<"Name::"<<result_item->name<<endl;
}



getchar();







return 0;
}
