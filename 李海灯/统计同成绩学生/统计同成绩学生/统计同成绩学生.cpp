
#include <iostream>

using namespace std;

int main()
{
    int studentCnt,tempScore;

    int findCnt,tempNum;

    int scoreCnt[101]={0};
	//初始化数组
    cin >> studentCnt;
    
	for(int i=0; i<studentCnt; i++)
    {
        cin >> tempScore;

        scoreCnt[tempScore] ++;//统计每个成绩学生的个数
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

        cout << scoreCnt[tempNum];//输出要查询成绩对应的学生个数
    }
    return 0;
}
