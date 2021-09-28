//============================================================================
// Name        : structural-design-pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
//Client can call the target directly.

class Target{

public:
	virtual ~Target()=default;



	virtual string Request()const
	{


		return "Target: the default target's behaviour";
	}

};

//Adaptee has some useful feature that the client wants to call.But directly, it is not possible.
//So then we have to make an interface so that we can call the adaptee from client code

class Adaptee
{

public:
	string SpecificRequest() const
	{

		  return ".eetpadA eht fo roivaheb laicepS";

	}


};

//The client has to access the adaptee, but it has different interface. So we have to derive another class from target
//and then call the adaptee class with necessary parameters.While calling from the client code depending upon the pointer being passed to 'clientcode()'
//the different implementations will be called.

class Adapter: public Target
{


	Adaptee *adaptee;

public:
	Adapter(Adaptee *_iadaptee):adaptee(_iadaptee)
	{


	}

string Request ()const override
{

string to_reverse=this->adaptee->SpecificRequest();

 reverse(to_reverse.begin(),to_reverse.end());
 return to_reverse;

}



};


void clientcode(Target *itarget)
{

	cout<<itarget->Request()<<endl;


}
int main() {



	//Normal calling of the target function from the client code.

	Target *t1=new Target;

	clientcode(t1);


	//calling adaptee through adapter class interface

Adaptee *tadaptee=new Adaptee;
cout<<tadaptee->SpecificRequest()<<endl;

	Target *t2=new Adapter(tadaptee);

	clientcode(t2);
	getchar();


	return 0;
}
