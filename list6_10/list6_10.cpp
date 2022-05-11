#include <iostream>
#include <string>
using namespace std;
#include "Counter.h"
#include "CounterEx.h"

int main() {
  CounterEx cnt;
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  cnt.upVal();
  cnt.upVal();
  cnt.upVal();
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  cnt.downVal();
  cnt.downVal();
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  Counter* cntAlias1 = &cnt;
  cntAlias1->upVal();
  //cntAlias->downVal(); //�@Counter�N���X�Ƃ��Ă݂Ă���̂ő��݂��Ȃ�
  
  CounterEx* cntAlias2 = &cnt;
  cntAlias2->upVal();
  cntAlias2->downVal(); //�@CounterEx�N���X�Ƃ��Ă݂Ă���̂Ŏg����
  
  return 0;
}
