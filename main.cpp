#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
#include"data.h"
int main(){
    //std::list<unsigned int> input({  5 ,10, 3,8,1 });
    std::list<unsigned int> input;
    std::fstream fin;
    fin.open("random_numbers.csv", std::ios::in);
    std::string line, word, temp;
    while (fin >> temp) {
        // used for breaking words
        std::stringstream s(temp);
        char delim = ',';
        getline(s, word, delim);
        word.erase(word.begin(), word.begin() + 3);//remove garbage at start
        input.push_back(stoi(word));//populate list with values from csv
        while (getline(s, word, delim))
            input.push_back(stoi(word));    
    }
    Data students(input);
    unsigned int minVal =students.lower_bound();
    unsigned int maxVal = students.upper_bound();
    std::cout << "Lower Bound is :" << minVal << "\t" << "Upper bound is :" << maxVal << std::endl;
}
