/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <iostream>
#include "../Library/FileSystemPlusPlus.h"

typedef struct FTokenizer {
public:
	// Comment Lines
	std::string CommentLineBegin = "/>";
	std::string CommentLineEnd = "</";
	std::string SingleCommentLine = "//";
	
	// Brackets
	std::string BracketsBegin = "[";
	std::string BracketsEnd = "]";
	std::string OtherBracketBegin = "(";
	std::string OtherBracketEnd = ")";
	// Sign
	std::string RightArrowSign = "->";
	std::string LeftArrowSign = "<-";
	
} Tokenizer;

#endif // TOKENIZER_HPP
