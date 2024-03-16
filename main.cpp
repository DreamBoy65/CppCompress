#include <iostream>
#include <string>
#include <cmath>
#include "func.hpp"
using namespace std;

void askQ(int cmd) {
  if(cmd == 1) {
    cFile();
  } else if(cmd == 2) {
    dcFile();
  } else if(cmd != 0) {
    log("Invalid command.");
  }
}

int main() {
  int cmd;
  log("<==== STARTING PROGRAM ====>");

  do {
    log("[0] Exit");
    log("[1] Compress file");
    log("[2] DeCompress file");
    log("Enter a command to execute (0 to exit) ~> ");
    cin >> cmd;

    askQ(cmd);
  } while(cmd != 0);

  log("<==== EXITING PROGRAM ====>");
  return 0;
}