#include <iostream>
#include <string>

int main(){
    std::string str1 = "Hello, ";
    std::string str2 = "World! ";
    std::string result = str1 + str2;
    printf("Concatenação: %s\n", result.c_str());
    return 0;
}