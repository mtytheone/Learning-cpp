#include "fielder.h"

Fielder::Fielder(string name, int number)
{
    m_name = name;
    m_number = number;
    m_kind = "���";
}
//  �s�b�`���[���v���C����
void Fielder::play()
{
    cout << "�s�b�`���[�̋����󂯂�" << endl;
}