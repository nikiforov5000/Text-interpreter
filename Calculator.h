#pragma once
#include <iostream>
#include <map>
#include <string>
#include <stack>
#include <vector>
#include <regex>

#include "Variable.h"
#include "Operation.h"

class Calculator {
	std::map<std::string, Variable> m_userVariables;
	Value evaluate(const std::vector<Token>& tokens, size_t startToken, size_t endToken);

public:
	Calculator(){
	 
	};

	Value evaluate(const std::string& userInput);

	~Calculator() {
	 
	}
};

