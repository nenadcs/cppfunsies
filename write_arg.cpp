//TODO  
//  O append the vector to a file
//  O read back the file
//  - make both programs function as one

#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <ctime>

int main(int argc, char *argv[]) {

  std::vector<std::string> arg_vector = {};

  for (int ndx{}; ndx != argc; ++ndx) {
    if (ndx != 0) {
      arg_vector.push_back(argv[ndx]);
    } else {
      continue;
    }
  }
  
  std::ofstream outf{ "arg_log", std::ios::app };
  std::time_t result = std::time(nullptr);
  outf << std::ctime(&result) << '\t';
  outf << "> " << argc - 1 << '\t';
  for (auto n : arg_vector)
    outf << n << ' ';
  outf << '\n';
}
