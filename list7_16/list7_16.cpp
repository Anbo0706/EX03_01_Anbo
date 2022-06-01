#include <iostream>
#include <string>
using namespace std;
#include "Point.h"

int main() {
  Point p1(3, 5);
  Point p2(2, 4);
  Point p3, p4;

  p3 = p1 + p2;
  p4 = p1 - p2;

  cout << "p1�Fx = " << p1.getX() << ", y = " << p1.getY() << endl;
  cout << "p2�Fx = " << p2.getX() << ", y = " << p2.getY() << endl;
  cout << "p3�Fx = " << p3.getX() << ", y = " << p3.getY() << endl;
  cout << "p4�Fx = " << p4.getX() << ", y = " << p4.getY() << endl;

  return 0;
}
