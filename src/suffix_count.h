/*
    Suffix count

    In this problem, you will write a function that returns the count of a string’s suffix in a given string, S. 
    A suffix is a combination of one or more symbols appended at the end of the string. 
    You will be given the length, L of the suffix as a parameter to the function

    Sample Input:
        et tu, brute
        1
    
    Sample Output:
        2 
*/

#include <iostream>
#include <string>

int suffixCount(std::string S, int L) {
    std::string suffix;
    for (int i = S.length()-1; (S.length()-i) <= L; i--) {
        suffix += S[i];
    }

    int count = 0;
    for(int j = 0; j < S.length(); j++) {
		if (S[j] == suffix[0]) {
			bool match = true;
			for (int k = 0; k < suffix.length(); k++) {
				if (S[j+k] != suffix[k]) {
					match = false;
					break;
				}
			}
			if (match) {
				count++;
			}
		}
    }

    return count;
}
