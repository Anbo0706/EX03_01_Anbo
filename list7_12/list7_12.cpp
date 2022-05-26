#include <iostream>
#include <cstring>
using namespace std;
class StringComp {
public:
    char* c;
    StringComp(char* c){
        this->c = c;
    }
    bool operator==(StringComp &dest) {
        bool result = true;
        for (int i = 0;; i++) {
            if (*(c + i) != *(dest.c + i)) {
                result = false;
                break;
            }
            else {
                if (*(c + i) == '\0') {
                    break;
                }
            }
        }
        return result;
    };
};
bool stringCompare(char* c1, char* c2) {
    bool result = true;
    for (int i = 0;; i++) {
        if (*(c1 + i) != *(c2 + i)) {
            result = false;
            break;
        }
        else {
            if (*(c1 + i) == '\0') {
                break;
            }
        }
    }
    return result;
}


int main() {
  char s1[] = "abcdefg";
  char s2[] = "abcdefg";

  StringComp* sc1=new StringComp( "abcdefg" );
  StringComp* sc2 = new StringComp("abcdefg");

  //if (strcmp(s1, s2) == 0) {
  //  cout << "�������I" << endl;
  //}
  //else {
  //  cout << "�������Ȃ��I" << endl;
  //}

  if (s1 == s2) {
      cout << "�������I" << endl;
  }
  else {
      cout << "�������Ȃ��I" << endl;
  }
  if (stringCompare(s1, s2)) {
      cout << "stringCompare�œ������I" << endl;
  }
  else {
      cout << "stringCompare�œ������Ȃ��I" << endl;
  }
  if (*sc1== *sc2) {
      cout << "stringCompareClass�œ������I" << endl;
  }
  else {
      cout << "stringCompareClass�œ������Ȃ��I" << endl;
  }

  return 0;
}
