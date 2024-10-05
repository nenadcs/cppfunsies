#include <fstream>
#include <iostream>
#include <string>

int main()
{
  std::ifstream inputFile("arg_log");

  std::string line; 
  std::cout << "File Content: " << std::endl;
    while (getline(inputFile, line)) {
      std::cout << line << std::endl;
    }

    inputFile.close();
}
