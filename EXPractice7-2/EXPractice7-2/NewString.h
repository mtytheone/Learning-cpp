#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>

using namespace std;

class NewString {
private:
    //  文字列
    string m_value;
public:
    //  コンストラクタ
    NewString();
    //  値を代入するコンストラクタ�@（文字列から）
    NewString(string value);
    //  値を代入するコンストラクタ�A（他のクラスから)
    NewString(NewString& value);
    //  値を代入
    NewString& operator= (NewString& n);
    //  stringで値を取得
    string getValue();
};

int operator==(NewString n1, NewString n2);

#endif // _NEWSTRING_H_