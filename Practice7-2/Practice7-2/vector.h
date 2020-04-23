#ifndef _VECTOR_H_
#define _VECTOR_H_

//  �x�N�g���N���X
class Vector {
private:
    double m_x;
    double m_y;
public:
    //  �R���X�g���N�^
    Vector();
    // �����t���R���X�g���N�^
    Vector(double x, double y);
    //  �����̐ݒ�
    void set(double x, double y);
    //  x�����̎擾
    double getX();
    //  y�����̎擾
    double getY();
};

#endif // _VECTOR_H_