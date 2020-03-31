// CodeHunter.cpp : Defines the entry point for the console application.
//

//  Commented out #include "stdafx.h" as there is no file with this name to include.
//#include "pch.h" // The header file was missing for me personally and may not be part of the assignment, but I added it. 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string textToAnalyze;
	// The easter egg spotted 
	int foo = 0; 
	// That it counts the amount of vowels in the sentence or sentences that's used
	int vowels = 0;
	// That the amount of consonants used in the sentence
	int consonants = 0;
	// The counts the amount of consonants used on the sentence 
	int digits = 0;
	// The counts of the amount of spaces used in the sentence
	int spaces = 0;
	// The counts of amount characters used in the total string
	int lengthOfStringSubmittedForAnalysis = 0;
	// The counts of amount of symbols that're not identifiable 
	int unknownCharacters = 0;
	// The count of the total amount of charaters used
	int checkSum = 0;
	// That it possible easter egg spotted, bar is not being used 
	int bar = 0; 
	//This integer is not used anywhere in the code, and is therefore not needed. 

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	// The loop is analyzing one letter of each pass.

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		// Checking to see if the current letter is a vowel or aren't
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; // This line was previously --vowels; which would decrease the vowel count by one every time we find one.
					  // This process needs to be changed to ++vowels to increase the vowel count each time we find one. 
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants; // This line was commented out and should not be.
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		//This message display if it received without errors 
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		// This message shows when something goes wrong
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}