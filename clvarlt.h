#ifndef CLVARLT_H
#define CLVARLT_H

#include <string>
#include <iostream>

using namespace std;

class clvarlt{
	private:
	int clauseNo;
	string varVal;
	
	public:
	clvarlt()
	{
		clauseNo = 0;
		varVal = "";
	}
	clvarlt(int c, string v)
	{
		clauseNo = c;
		varVal = v;
	}
	void setClause(int c)
	{
		clauseNo = c;
	}
	void setVar(string v)
	{
		varVal = v;
	}
	int getClause()
	{
		return clauseNo;
	}
	string getVar()
	{
		return varVal;
	}
};

#endif
