#pragma once
#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter 
{
private:
    // 回数
    int m_count;
    // 総回数
    static int m_totalCount;

public:
    // コンストラクタ
    Counter();
    // リセット
    void reset();
    // カウント
    void count();
    // カウントの数
    int getCount();
    // カウントの総数
    static int getTotalCount();
};

#endif // _COUNTER_H_