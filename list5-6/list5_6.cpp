#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
	// HealthChecker�N���X�̃C���X�^���X�𐶐�����
	const int DATA_NUM = 3;			// �z��̗v�f��
// HealthChecker�N���X���f�[�^�^�Ƃ����z��
	HealthChecker people[DATA_NUM] = {
	  HealthChecker("�R�c��Y", 170, 67.5),	// �R�c����
	  HealthChecker("�����Ԏq", 160, 54.5),	// ��������
	  HealthChecker("��؎��Y", 180, 85.5)	// ��؂���
	};
	cout << "�W����BMI��" << HealthChecker::getStdBmi() << "�ł��B" << endl;

	HealthChecker yamada("�R�c��Y", 170, 67.5);
	cout << yamada.getName() << "�����BMI��" << yamada.getBmi() << "�ł��B" << endl;
	cout<< yamada.getName() << "����̕W���̏d��" << yamada.getStdWeight() << "�ł��B" << endl;
	HealthChecker* shimura = new HealthChecker("�u���~", 168, 60.5);
	cout << shimura->getName() << "�����BMI��" << shimura->getBmi() << "�ł��B" << endl;
	cout << shimura->getName() << "����̕W���̏d��" << shimura->getStdWeight() << "�ł��B" << endl;

	// BMI�̒l��\������
	for (int i = 0; i < DATA_NUM; i++) {
		std::cout << people[i].getName() << "�����BMI�́A" << people[i].getBmi() << "�ł��B" << std::endl;
		cout << people[i].getName() << "����̕W���̏d��" << people[i].getStdWeight() << "�ł��B" << endl;
	}
	return 0;
}
