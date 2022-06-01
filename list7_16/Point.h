class Point {
  private:
    double x;	// x���W���i�[���郁���o�ϐ�
    double y;	// y���W���i�[���郁���o�ϐ�
  public:
    Point(double x = 0, double y = 0);	// �R���X�g���N�^
    double getX();			// x���W��Ԃ��Q�b�^
    double getY();			// y���W��Ԃ��Q�b�^
    Point operator+(const Point &p);	// + ���Z�q�̃I�[�o�[���[�h
    Point operator-(const Point &p);	// - ���Z�q�̃I�[�o�[���[�h
    bool operator==(const Point &p);	// == ���Z�q�̃I�[�o�[���[�h
    bool operator!=(const Point &p);	// != ���Z�q�̃I�[�o�[���[�h
    // >> ���Z�q�̃I�[�o�[���[�h
    friend istream &operator>>(istream &is, Point &p);
    // << ���Z�q�̃I�[�o�[���[�h
    friend ostream &operator<<(ostream &os, const Point &p);
};
