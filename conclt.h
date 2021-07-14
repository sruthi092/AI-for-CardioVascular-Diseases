#ifndef CONCLT_H
#define CONCLT_H

#include<string>
#include<iostream>

using namespace std;

class conclt{
	private:
	int ruleNo;
	string conclusion;
	string condition_val;
	
	public:
	conclt()
	{
		ruleNo = 0;
		conclusion = "";
		condition_val = "";
	}
	conclt(int r, string c, string v)
	{
		ruleNo = r;
		conclusion = c;
		condition_val = v;
	}
	void setRule(int r)
	{
		ruleNo = r;
	}
	void setConclusion(string c)
	{
		conclusion = c;
	}
	void setCondition(string v)
	{
		condition_val = v;
	}
	int getRule()
	{
		return ruleNo;
	}
	string getConclusion()
	{
		return conclusion;
	}
	string getCondition()
	{
		return condition_val;
	}
};

#endif
