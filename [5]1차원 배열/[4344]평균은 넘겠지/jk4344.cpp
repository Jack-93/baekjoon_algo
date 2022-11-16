#include <iostream>
using namespace std;

int main()
{
    // 평균구하는게 아니고 평균보다 잘 본 인원 비율 구하기;

    int test;        //테스트케이스
    int stu;         //학생수 1000명제한
    int score[1000]; // 학생들 점수

    double avg = 0;
    double rate = 0;
    int count = 0;

    cout << fixed;
    cout.precision(3);

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> stu;

        for (int j = 0; j < stu; j++)
        {
            cin >> score[j];
            avg += score[j];
        }
        avg = avg / stu;

        for (int k = 0; k < stu; k++)
        {
            if (score[k] > avg)
            {
                count++;
            }
        }
        // cout << count << "\n";
        // cout << stu << "\n";
        rate = (double)count / stu * 100;

        cout << rate << "%"
             << "\n";

        count = 0;
        rate = 0;
        avg = 0;
    }
}