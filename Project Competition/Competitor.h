#pragma once
#include <iostream>
using namespace std;
class Competitor
{
protected:
	string name;
	int stamina;
	int jumphigh;
public:
	Competitor() = default;
	Competitor(string n, int s, int jh);
	virtual void Run() = 0;
	virtual void Jump() = 0;
};

