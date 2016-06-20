#pragma once
#include "PermanentMember.h"

class Teacher : PermanentMember
{
public:
	float salary;
	int seniority;
	Teacher();
	~Teacher();
};
