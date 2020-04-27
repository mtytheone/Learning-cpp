#include "NewString.h"

//  �R���X�g���N�^
NewString::NewString()
{
    m_value = "";
}
//  �l��������R���X�g���N�^�@�i�����񂩂�j
NewString::NewString(string value)
{
    m_value = value;
}
//  �l��������R���X�g���N�^�A�i���̃N���X����)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  �l����
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}
//  string�Œl���擾
string NewString::getValue()
{
    return m_value;
}

int operator==(NewString n1, NewString n2)
{
    string n1Str = n1.getValue();
    string n2Str = n2.getValue();

    if (n1Str.length() == n2Str.length()) return -1;

    for (int i = 0; i < n1Str.length(); i++)
    {
        char n1Ch = n1Str[i];
        char n2Ch = n2Str[i];
        int judge = strcmp(&n1Ch, &n2Ch);

        if (judge != 0) return judge;
    }

    return 0;
}