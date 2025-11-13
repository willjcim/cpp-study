// Prints the C++ language standard that my compiler is using currently

#include <iostream>

const int numStandards = 7;

// map standard longs to char 
const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};
const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26"};

long getCPPStandard() {
    // weird if cases here, i'm not used to this system 
    #if defined (_MSVC_LANG) 
        return _MSVC_LANG;
    #elif defined (_MSC_VER)
        return -1; // bail, version is old and stank
    #else
        return __cplusplus;
    #endif
}

int main() {
    long standard = getCPPStandard(); // get the standard as a long val

    if (standard == -1) { // bailout
        std::cout << "Error: Language standard is too old\n";
        return 0;
    }

    int found = 0;

    for (int i=0; i < numStandards; i++) { // compare against all num standards 
        if (standard == stdCode[i]) {
            std::cout << "Compiler language standard: " << stdName[i] << "\n";
            std::cout << "Compiler language standard code: " << standard << "L\n";
            found = 1;
            break;
        }
        
        if (standard < stdCode[i]) {
            std::cout << "Compiler language standard: " << stdName[i] << " - pre-release\n";
            std::cout << "Compiler language standard code: " << standard << "L\n";
            found = 1;
            break;
        }
    }

    if (found == 0) {
        std::cout << "Error: Language standard not recognized\n";
    }

    return 0;
}