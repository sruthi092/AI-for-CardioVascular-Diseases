#ifndef PROJECT1_A05024226_BACKWARDCHAINING_H
#define PROJECT1_A05024226_BACKWARDCHAINING_H
#include<iostream>
#include "varlt.h"
#include "conclt.h"
#include "concsk.h"
#include "clvarlt.h"
#include "diagnosis.h"
#include <unordered_map>
#include <string>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

class BackwardChaining{
	private:
	varlt variableList[30];
	conclt conclusionList[50];
	clvarlt clauseVariableList[450];
	stack <concsk> conclusionStack;

	public:
	BackwardChaining();
	void conclusionStackUpdate(int, int);
	int determine_variable_list(string);
	int determine_conclusion_list(string);
	diagnosis knowledgeBase(int, unordered_map<string, string> &);
	string analyzeDisease();
};

#endif


