#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <sstream>
using std::cout;
using std::string;
using std::map;

bool wordmap_comparitor(std::pair<std::string, std::vector<std::string>> pair1, std::pair<std::string, std::vector<std::string>> pair2) {
  return pair1.second.size() > pair2.second.size();
}
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
  std::vector<std::string> digraphs;
  
  std::map<std::string, std::vector<std::string>> wordMap;
  std::vector<std::string> empty;
  string nextdg;
  for(int j=0;j<length;j++){
    ifile >> nextdg;
    digraphs.push_back(nextdg);
    wordMap[nextdg]=empty;
  }
  
  // map is empty rn?????????????????????????????????
  while(ifile >> word) {
    for(int i=0;i<length;i++) {
      if(word.find(digraphs[i]) != string::npos) {
        vector<string> t = wordMap[digraphs[i]];
        t.push_back(word);
        wordMap[digraphs[i]]=t;
      }
    }
      
  }
  cout<<argv[2];
  string argument = argv[2];
  using namespace std;
  //checking input for which output order the user wants
  if (argument == "r") {
    cout<<"hello";
    //reverse ascii order
    for(std::map<std::string, std::vector<std::string>>::iterator it=wordMap.begin(); it!=wordMap.end(); it++){
      cout<<it->first;
      for(int i = 0;i<(it->second).size();i++){
        cout<<it->second[i];
      }
    }
    //std::sort(wordMap.begin(),wordMap.end(),greater<string>());  
  }
  else if (argument == "c") {
    //count of occurences largest to smallest
    //std::sort(wordMap.begin(),wordMap.end(), wordmap_comparitor); 
  }
  else if (argument == "a") {
    //ascii order
    //std::sort(wordMap.begin(),wordMap.end()); 
  }
  // TODO: WRITE CODE
  //output q? and exit if quit is returned else
  cout<<"q?>"<<endl;
  string input;
  cin>> input;
  stringstream ss(string);
  do {
    if (ss >)
  }
  while(input != "exit");
  return 0;
}
 //pair1, pair2;

