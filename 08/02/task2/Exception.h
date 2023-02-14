#pragma once
#include <string>
#include <stdexcept>
using namespace std;

class Exception :public domain_error
{
public:
	Exception(const string& message);
};