#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "BaseballPlayer.h"

class Catcher : public BaseballPlayer
{
public:
    //  �R���X�g���N�^
    Catcher(string name, int number);
    //  �L���b�`���[���v���C����
    void play();
};

#endif // !_CATCHER_H_