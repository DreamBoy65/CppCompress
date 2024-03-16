#ifndef FUNC_HPP
#define FUNC_HPP
#include <iostream>
#include <unordered_map>
#include <fstream>
#include "list.hpp"
using namespace std;

void log(string msg) {
  cout << "\n>>> " << msg;
}

void cFile() {
  cMap list;

  string fil;
  string name;

  log("Give file: ");
  cin >> fil;

  log("Name: ");
  cin >> name;

  ifstream file(fil);
  char letter;
  string fdata;

  if (file.is_open()) {
    ofstream outFile(name + ".emoji");

    while (file.get(letter)) {
      string code = list.list[string(1, letter)];

      outFile << code;
    }
    outFile.close();
    file.close();

    log("Compiled File! ~  .emoji");
    log("");
  } else {
    cerr << "Unable to open file!" << endl;
  }
};

void dcFile() {
  dMap list;

  string fil;
  string name;

  log("Give file: ");
  cin >> fil;

  log("Name: ");
  cin >> name;

  ifstream file(fil);
  char letter;

  if (file.is_open()) {
    ofstream outFile(name);

    while (file.get(letter)) {
      cout << string(1, letter);

      string code = list.list[string(1, letter)];
      cout << "code: " << code;

      outFile << code;
    }
    outFile.close();
    file.close();

    log("DeCompiled File! " + name);
    log("");
  } else {
    cerr << "Unable to open file!" << endl;
  }
};


#endif