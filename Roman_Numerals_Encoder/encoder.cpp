/*
Сhange each digit of the number to the corresponding letter
Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000
*/
#include <iostream>
#include <string>
#include <vector>

void encoder (std::string str) {
    int compare = 0;
    int value = 0;
    std::string subStr;
    std::string newStr;
   
    // 1000
    if(str[str.length()-4]){        
        subStr = str[str.length()-4];
        compare = std::stoi(subStr);
        for(int i = 0; i < (compare/1); i++) {
            newStr.append("M");
        }
    }  
    //500
    if(str[str.length()-3]){
        subStr = str[str.length()-3];
        compare = std::stoi(subStr);
        for(int i = 0; i < (compare/5); i++) {
            newStr.append("D");
        }
    //100
        subStr = str[str.length()-3];
        compare = std::stoi(subStr);
        value = (compare-((compare/5)*5))/1;
        for(int i = 0; i < value; i++) {
            newStr.append("C");
        }  
    }   
    //50
    if(str[str.length()-2]){
        subStr = str[str.length()-2];
        compare = std::stoi(subStr);
        for(int i = 0; i < (compare/5); i++) {
            newStr.append("L");
        }     
    //10
        subStr = str[str.length()-2];
        compare = std::stoi(subStr);
        value = (compare-((compare/5)*5))/1;
        for(int i = 0; i < value; i++) {
            newStr.append("X");
        }
    }
    //5
    if(str[str.length()-1]){
        subStr = str[str.length()-1];
        compare = std::stoi(subStr);
        for(int i = 0; i < (compare/5); i++) {
            newStr.append("V");
        }       
    //1
        subStr = str[str.length()-1];
        compare = std::stoi(subStr);
        value = (compare-(compare/5))/1;
        for(int i = 0; i < value; i++) {
            newStr.append("I");
        }  
    }   
   std::cout << newStr << std::endl;
}

int  main () {
    std::string str;
    std::cin >> str;
    encoder(str);
    return 0; 
}
