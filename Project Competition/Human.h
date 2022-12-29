#pragma once
#include "Competitor.h"
#include <iostream>
class Human :public Competitor
{
public:
	Human() = default;
	Human(string n, int s, int jh) :Competitor(n, s, jh) {};
};

