/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <Interpreter.hpp>
#include <DiffVersion.hpp>
#include <iostream>
#include <cstring>

std::string 
DiffVersion::Time() {
	FInterpreter intp;
	std::string ftime(__TIME__); // Convert
	return intp.EraseAllSubString(ftime, ":");
}

std::string
DiffVersion::VersionAlgorithm() {
	std::string version;
	version.append(DIFFUSION_VERSION);
	version.append(Hyphen);
	version.append(DIFFUSION_STATE);
	version.append(Hyphen);
	version.append(Time());
	return version;
}
