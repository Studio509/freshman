
#include <iostream>

using namespace std;

int main()
{
    int studentCnt,tempScore;

    int findCnt,tempNum;

    int scoreCnt[101]={0};
	//��ʼ������
    cin >> studentCnt;
    
	for(int i=0; i<studentCnt; i++)
    {
        cin >> tempScore;

        scoreCnt[tempScore] ++;//ͳ��ÿ���ɼ�ѧ���ĸ���
    }
    cin >> findCnt;
    
	bool symbolFlag = false;
    
	for(int i=0; i<findCnt; ++i)
    {
        cin >> tempNum;

        if(symbolFlag)

            cout << " ";
        else
            symbolFlag = true;

        cout << scoreCnt[tempNum];//���Ҫ��ѯ�ɼ���Ӧ��ѧ������
    }
    return 0;
}
