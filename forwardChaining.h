#ifndef PROJECT1_A05024226_FORWARDCHAINING_H
#define PROJECT1_A05024226_FORWARDCHAINING_H
#include <unordered_map>
#include <queue>
#include <array>
#include <string>
using namespace std;
struct VariableValuePair
{
    string VariableName;
    string Value;
    VariableValuePair()
    {
    }
    VariableValuePair(string variableName, string value)
    {
        VariableName = variableName;
        Value = value;
    }
};

struct Rule
{
    vector<VariableValuePair> Clauses;
    VariableValuePair Result;
    Rule()
    {
    }
    Rule(vector<VariableValuePair> clauses, VariableValuePair result)
    {
        Clauses = clauses;
        Result = result;
    }
};

struct Variable_info
{
    bool initialized = false;
    string value = "";
};

class ForwardChaining
{
public:
    void Initialize();
    void GetTreatment(string treatment);
private:
    static const int maxvariablesperrule = 6;
    static const int rule_count = 38;
    unordered_map<int,Rule> rulemap;
    unordered_map<string,Variable_info> variablelist;
    array<string, rule_count * maxvariablesperrule + 1> clause_variable_list;
    array<int, 2> clause_variable_pointer;
    queue<string> conclusion_variable_queue;
    int GetRuleNumber(int);
    int GetClauseNumber(int);
    int GetNextIndexFromClauseVariableList(string variable_name, int current_index);
    void InitializeVariableInVariableList(string variable_name, string value);
    void GetConclusion(string variableName, string value);
};
#endif // PROJECT1_A05024226_FORWARDCHAINING_H

