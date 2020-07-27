/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef DIFF_VERSION_HPP
#define DIFF_VERSION_HPP

#include <iostream>

#define DIFFUSION_VERSION "0.1"
#define DIFFUSION_STATE "beta-1"

#define Hyphen "-"

class DiffVersion {
public:
	std::string Time();
	std::string VersionAlgorithm();
};

#endif // DIFF_VERSION_HPP
