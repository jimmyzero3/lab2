#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "Family.h"// use "" will find .h file in smane directory, while <> will search the predetermined header directory.

using namespace std;


int main()
{

	Family member;
	float height=0;
	int mass=0;
	float BMI=0;
	string BmIClass;


	ifstream inFile("file.in", ios::in);
	if(!inFile)
		{
			cerr<<"Failed Opening!!! D:"<<endl;
			exit(1);
		}
	ofstream OutFile("file.out", ios::out);
	inFile>>height;
	inFile>>mass;
	member.setHeight(height);
	member.setmass(mass);
	BMI=member.CalcBMI(member.getHeight() , member.getMass());
	BmIClass=member.BMIclass(BMI);

	OutFile<<setprecision(4)<<BMI<<"\t"<<BmIClass<<endl;

	do
	{

	inFile>>height;
	inFile>>mass;
	member.setHeight(height);
	member.setmass(mass);
	BMI=member.CalcBMI(member.getHeight() , member.getMass());
	BmIClass=member.BMIclass(BMI);

	OutFile<<setprecision(4)<<BMI<<"\t"<<BmIClass<<endl;

	}while(height!=0);

    return 0;


}