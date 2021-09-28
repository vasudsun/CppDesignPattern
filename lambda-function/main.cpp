/*
 * main.cpp
 *
 *  Created on: 03-Sep-2021
 *      Author: in0suv
 */


#include<iostream>
using namespace std;

void testfunc(void(*pfunc)(string param))
{

	pfunc("sunil");

}




int main()
{



	auto func=[](string str){       cout<<str<<endl;};

	testfunc(func);





	return 0;
}

