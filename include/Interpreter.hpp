/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include <iostream>
#include "../Library/FileSystemPlusPlus.h"


class FInterpreter {
public:
	FInterpreter();
	~FInterpreter();
	std::string Whitespace = " ";
	static bool FindObject(std::string, std::string);
	static void DifFusionInterpreter(std::string);
	static bool ReadFileWithReturn(std::string, std::string);
	static bool FCommentLine(std::string, std::string);
	static void Read(std::string);
	static void GetBtwString(std::string, std::string, std::string, std::string &);
	static std::string EraseAllSubString(std::string &, const std::string &);	
	static std::string GetObject(std::string, std::string, int);
};

#endif // INTERPRETER_HPP
