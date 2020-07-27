/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include <Interpreter.hpp>
#include <DifFusionMain.hpp>
#include <DiffVersion.hpp>

#include "../Library/FileSystemPlusPlus.h"

#define EXIT_SUCCESS 0

void HelpFunction() {
	printf("Fegeya DifFusion\ndiffusion --b <file>: Interprets your inputted variable DifFusion code\ndiffusion --v : Shows version\n");
}

int main(int argc, char** argv) {
		if(argc > 1) {
		for(int i = 1; i < argc; i++) {
			std::string arg(argv[i]);
			if(arg.substr(0, 2) == "--") {
				 if(arg == "--b" || arg == "--build") {
					FInterpreter interp;
					std::cout << "File: ";
					std::getline(std::cin, arg);
					interp.DifFusionInterpreter(arg);
				} else if(arg == "--help" || arg == "--h") {
					HelpFunction();
					exit(EXIT_SUCCESS);
				} else if(arg == "--version" || arg == "--v") {
					DiffVersion vers;
					std::cout << vers.VersionAlgorithm() << "\n";
				}	
			} else {
				HelpFunction();
			}
		}
        } else {
        	HelpFunction();
        }
	return 0;
}
