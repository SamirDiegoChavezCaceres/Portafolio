#include "oneaway.h"

bool oneAway(string a, string b) {
  if(a.length() == b.length()) {
    return ifReplace(a, b);
  } else if(b.length() - 1 == a.length()) {
    return ifInsert(a, b);
  } else if(a.length() - 1 == b.length()) {
    return ifRemove(a, b);
  }
  return false;
}

bool ifInsert(string a, string b) {
  int i1 = 0, i2 = 0;
  bool diff = true;
  while(i1 < a.length() && i2 < b.length()) {
    if(a[i1] != b[i2]) {
      if(diff) {
        diff = false;
      } else 
        return false;
      i2++;
    } else {
      i1++;
      i2++;
    }
  }
  return true;
}

bool ifRemove(string a, string b) {
  return ifInsert(b, a);
}

bool ifReplace(string a, string b) {
  bool diff = true;
  for(int i = 0; i < a.length(); i++) {
    if(a[i] != b[i]) {
      if(diff) {
        diff = false;
      } else {
        return false;
      }
    }   
  }
  return true;
}

int main() {
  string a = "actor";
  string b = "actr";
  cout << a << "," << b << "/" << oneAway(a, b) << "\n";
  return 0;
}