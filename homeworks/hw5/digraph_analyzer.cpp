#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using std::cout;
using std::string;

int main(int argc, char * argv[]) {
  // if number of arguments is not correct, exit with code 1!
  if (argc != 3) {
    cout<<"Invalid arguments";
    return 1;
  }

  // if the "order" argument is not valid, exit with code 1!
  string order(argv[2]);
  if (order != "r" && order != "a" && order != "c") {
    cout<<"Invalid arguments";
    return 1;
  }
  

  //str.find()
  std::ifstream ifile(argv[1]);
  std::string word;

  //number of digraphs to search for
  int length;
  ifile >> length;

  //inserting digraphs into vector
  using std::vector;
  vector<std::string> digraphs;
  
  string nextdg;
  for(int j=0;j<length;j++){
    digraphs.push_back(ifile >> nextdg);
  }

  while(ifile >> word) {
    for(int i=0;i<length;i++)

  }


  //checking input for which output order the user wants
  if (argv[2] == "r") {
    //reverse ascii order
    
  }
  else if (argv[2] == "c") {
    //count of occurences
    string count=[];
  }
  else if (argv[2] == "a") {
    //ascii order
    string ascii=[];
  }
  // TODO: WRITE CODE
  
  
  return 0;
}


