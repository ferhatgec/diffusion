/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include <cstring>
#include "../include/Interpreter.hpp"

int main() {
	static FInterpreter intp;
	std::string file("test.dfsn"); 
	std::string tag("projectname");
	std::cout << intp.GetObject(file, tag, 0) << "\n";
	return 0;
}
