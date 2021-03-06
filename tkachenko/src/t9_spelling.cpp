#include "stdafx.h"

#include "t9_spelling.h"


std::string T9_Spelling::spell(const std::string& text)
{
    std::string result = "";
	std::string decoded_letter = "";

	if(!text.size()) throw std::invalid_argument("The word shoul consist letters from a to z or the space symbol!");
	for(int i = 0; i < text.size(); i++)
	{
		if((text[i] < 'a' || text[i] > 'z') && text[i] != ' ') throw std::invalid_argument("The word shoul consist letters from a to z or the space symbol!");
		decoded_letter = getCodeForLetter(text[i]);
		if(result.size() > 0 && result[result.size()-1]==decoded_letter[0]) result += " ";
		result+=decoded_letter;	
	}


    return result;
}

std::string T9_Spelling::getCodeForLetter(char ch)
{
	switch(ch)
	{
		case 'a': return "2";
		case 'b': return "22";
		case 'c': return "222";
		case 'd': return "3";
		case 'e': return "33";
		case 'f': return "333";
		case 'g': return "4";
		case 'h': return "44";
		case 'i': return "444";
		case 'j': return "5";
		case 'k': return "55";
		case 'l': return "555";
		case 'm': return "6";
		case 'n': return "66";
		case 'o': return "666";
		case 'p': return "7";
		case 'q': return "77";
		case 'r': return "777";
		case 's': return "7777";
		case 't': return "8";
		case 'u': return "88";
		case 'v': return "888";
		case 'w': return "9";
		case 'x': return "99";
		case 'y': return "999";
		case 'z': return "9999";
		case ' ': return "0";
		default: throw std::invalid_argument("The function espected a letter from a to z or the space symbol!");
			
	}
}



