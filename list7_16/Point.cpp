#include <iostream>
using namespace std;
#include "Point.h"

// �R���X�g���N�^�̎���
Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}

// x���W��Ԃ��Q�b�^�̎���
double Point::getX() {
  return this->x;
}

// y���W��Ԃ��Q�b�^�̎���
double Point::getY() {
  return this->y;
}

// + ���Z�q�̃I�[�o�[���[�h�̎���
Point Point::operator+(const Point &p) {
  Point ans(this->x + p.x, this->y + p.y);
  return ans;
}

// - ���Z�q�̃I�[�o�[���[�h�̎���
Point Point::operator-(const Point &p) {
  Point ans(this->x - p.x, this->y - p.y);
  return ans;
}

// == ���Z�q�̃I�[�o�[���[�h�̎���
bool Point::operator==(const Point &p) {
  return this->x == p.x && this->y == p.y;
}

// != ���Z�q�̃I�[�o�[���[�h�̎���
bool Point::operator!=(const Point &p) {
  return !(*this == p);
}

// >> ���Z�q�̃I�[�o�[���[�h�̎���
istream &operator>>(istream &is, Point &p) {
  is >> p.x >> p.y;
  return is;
}

// << ���Z�q�̃I�[�o�[���[�h�̎���
ostream &operator<<(ostream &os, const Point &p) {
  os << "x = " << p.x << ", y = " << p.y;
  return os;
}
