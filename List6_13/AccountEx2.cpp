#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "AccountEx2.h"

// �������`�l��Ԃ������o�֐��̎���
string AccountEx2::getName() {
  return this->name;
}

// �R���X�g���N�^�̎���
AccountEx2::AccountEx2(string number, string name, int balance) 
  {
	this->name = name;
	this->account = new Account(number,balance);
}
