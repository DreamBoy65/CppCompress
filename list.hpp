#ifndef LIST_HPP
#define LIST_HPP
#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

class cMap {
  public:
  unordered_map < string,
  string > list;

  cMap() {
    // Initialize your map here
    list[" "] = "🔪";
    list["\n"] = "☢️";
    list["a"] = "😀";
    list["b"] = "😃";
    list["c"] = "😄";
    list["d"] = "😁";
    list["e"] = "😆";
    list["f"] = "😅";
    list["g"] = "😂";
    list["h"] = "🤣";
    list["i"] = "😊";
    list["j"] = "😇";
    list["k"] = "🙂";
    list["l"] = "🙃";
    list["m"] = "😉";
    list["n"] = "😌";
    list["o"] = "😍";
    list["p"] = "😘";
    list["q"] = "😗";
    list["r"] = "😙";
    list["s"] = "😚";
    list["t"] = "😋";
    list["u"] = "😛";
    list["v"] = "😜";
    list["w"] = "😝";
    list["x"] = "😎";
    list["y"] = "🤓";
    list["z"] = "🧐";
    list["A"] = "😀";
    list["B"] = "😃";
    list["C"] = "😄";
    list["D"] = "😁";
    list["E"] = "😆";
    list["F"] = "😅";
    list["G"] = "😂";
    list["H"] = "🤣";
    list["I"] = "😊";
    list["J"] = "😇";
    list["K"] = "🙂";
    list["L"] = "🙃";
    list["M"] = "😉";
    list["N"] = "😌";
    list["O"] = "😍";
    list["P"] = "😘";
    list["Q"] = "😗";
    list["R"] = "😙";
    list["S"] = "😚";
    list["T"] = "😋";
    list["U"] = "😛";
    list["V"] = "😜";
    list["W"] = "😝";
    list["X"] = "😎";
    list["Y"] = "🤓";
    list["Z"] = "🧐";
    list["0"] = "👶";
    list["1"] = "🧒";
    list["2"] = "👦";
    list["3"] = "🧑";
    list["4"] = "👨";
    list["5"] = "👩";
    list["6"] = "🧓";
    list["7"] = "👴";
    list["8"] = "🧔";
    list["9"] = "👵";
    list["`"] = "😇";
    list["~"] = "😋";
    list["\\"] = "🙃";
    list["{"] = "🙂";
    list["}"] = "😌";
    list["|"] = "😉";
    list["!"] = "😍";
    list["@"] = "😘";
    list["#"] = "😗";
    list["$"] = "😙";
    list["%"] = "😚";
    list["^"] = "😋";
    list["&"] = "😛";
    list["*"] = "😜";
    list["("] = "😝";
    list[")"] = "😎";
    list["_"] = "🤓";
    list["-"] = "🧐";
    list["="] = "😀";
    list["+"] = "😃";
    list["["] = "😄";
    list["]"] = "😁";
    list[";"] = "😆";
    list["'"] = "😅";
    list["️ū"] = "⛔️";
    list["ů"] = "☢️";
  }
};

class dMap {
  public:
  unordered_map < string,
  string > list;

  dMap() {
    // Initialize your map here
    list["🔪"] = " ";
    list["☢️"] = "\n";
    list["😀"] = "a";
    list["😃"] = "b";
    list["😄"] = "c";
    list["😁"] = "d";
    list["😆"] = "e";
    list["😅"] = "f";
    list["😂"] = "g";
    list["🤣"] = "h";
    list["😊"] = "i";
    list["😇"] = "j";
    list["🙂"] = "k";
    list["🙃"] = "l";
    list["😉"] = "m";
    list["😌"] = "n";
    list["😍"] = "o";
    list["😘"] = "p";
    list["😗"] = "q";
    list["😙"] = "r";
    list["😚"] = "s";
    list["😋"] = "t";
    list["😛"] = "u";
    list["😜"] = "v";
    list["😝"] = "w";
    list["😎"] = "x";
    list["🤓"] = "y";
    list["🧐"] = "z";
    list["👶"] = "0";
    list["🧒"] = "1";
    list["👦"] = "2";
    list["🧑"] = "3";
    list["👨"] = "4";
    list["👩"] = "5";
    list["🧓"] = "6";
    list["👴"] = "7";
    list["🧔"] = "8";
    list["👵"] = "9";
    list["😇"] = "`";
    list["😋"] = "~";
    list["🙃"] = "\\";
    list["🙂"] = "{";
    list["😌"] = "}";
    list["😉"] = "|";
    list["😍"] = "!";
    list["😘"] = "@";
    list["😗"] = "#";
    list["😙"] = "$";
    list["😚"] = "%";
    list["😋"] = "^";
    list["😛"] = "&";
    list["😜"] = "*";
    list["😝"] = "(";
    list["😎"] = ")";
    list["🤓"] = "_";
    list["🧐"] = "-";
    list["😀"] = "=";
    list["😃"] = "+";
    list["😄"] = "[";
    list["😁"] = "]";
    list["😆"] = ";";
    list["😅"] = "'";
  }
};

#endif