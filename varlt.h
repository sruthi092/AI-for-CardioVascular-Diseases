#ifndef VARLT_H
#define VARLT_H

#include<string>
#include<iostream>

using namespace std;

class varlt{
	private:
	string name;
	string detail;
	string value;
	
	public:
	varlt()
	{
		name = "";
		detail = "";
		value = "";
	}
	varlt(string n, string d, string v)
	{
		name = n;
		detail = d;
		value = v;
	}
	void setName(string n)
	{
		name = n;
	}
	void setDetail(string d)
	{
		detail = d;
	}
	void setValue(string v)
	{
		value = v;
	}
	string getName()
	{
		return name;
	}
	string getDetail()
	{
		return detail;
	}
	string getValue()
	{
		return value;
	}
};
#endif


