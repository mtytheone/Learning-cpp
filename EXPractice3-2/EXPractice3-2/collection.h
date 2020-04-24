#ifndef _COLLECTION_H_
#define _COLLECTION_H_

using namespace std;

template<typename T> class Collection
{
private:
    //  �z��f�[�^
    T* m_pArray;
    //  �z��̒���
    int m_length;

public:
    //  �R���X�g���N�^
    Collection(T* array, int length)
    {
        m_pArray = new T[length];
        m_length = length;
        for (int i = 0; i < m_length; i++) m_pArray[i] = array[i];
    };

    //  �f�X�g���N�^
    ~Collection()
    {
        delete[] m_pArray;
    };

    //  �ő�l�̎擾
    T getMax()
    {
        T max = m_pArray[0];
        for (int i = 0; i < m_length; i++) 
            if (max < m_pArray[i])
                max = m_pArray[i];

        return max;
    };

    //  �ŏ��l�̎擾
    T getMin()
    {
        T min = m_pArray[0];
        for (int i = 0; i < m_length; i++) 
            if (min > m_pArray[i])
                min = m_pArray[i];

        return min;
    };

    //  �����̕\��
    void showArray()
    {
        for (int i = 0; i < m_length; i++) cout << m_pArray[i] << " ";
        cout << endl;
    };
};

#endif // _COLLECTION_H_