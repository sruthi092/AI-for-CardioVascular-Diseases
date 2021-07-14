#ifndef CONCSK_H
#define CONCSK_H

#include<string>
#include<iostream>

using namespace std;

class concsk{
	private:
	int ruleNo;
	int clauseNo;
	
	public:
	concsk()
	{
		ruleNo = 0;
		clauseNo = 0;
	}
	concsk(int r, int c)
	{
		ruleNo = r;
		clauseNo = c;
	}
	void setRule(int r)
	{
		ruleNo = r;
	}
	void setClause(int c)
	{
		clauseNo = c;
	}
	int getRule()
	{
		return ruleNo;
	}
	int getClause()
	{
		return clauseNo;
	}
};

#endif
