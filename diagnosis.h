#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

#include<string>
#include<iostream>

using namespace std;

class diagnosis{
	private:
	string name;
	string value;
	string description;
	string flag;
	
	public:
	diagnosis()
	{
		name = "";
		value = "";
		description = "";
		flag = "";
	}
	diagnosis(string n, string v, string d, string f)
	{
		name = n;
		value = v;
		description = d;
		flag = f;
	}
	void setName(string n)
	{
		name = n;
	}
	void setValue(string v)
	{
		value = v;
	}
	void setDescription(string d)
	{
		description = d;
	}
	void setFlag(string f)
	{
		flag = f;
	}
	string getName()
	{
		return name;
	}
	string getValue()
	{
		return value;
	}
	string getDescription()
	{
		return description;
	}
	string getFlag()
	{
		return flag;
	}
};
#endif


