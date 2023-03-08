#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL)); 

    int a, b, c;
    double c_actual, c_answer;
    char choice;

    do {
        a = rand() % 100 + 1; // 1 ~ 100の範囲でランダムな整数を生成
        b = rand() % 100 + 1;
        c_actual = sqrt(a * a + b * b); // 実際の斜辺の長さを計算
        cout << "a = " << a << ", b = " << b << ", c(斜辺の長さ) = ?" << endl;
        cin >> c_answer;
        if (abs(c_actual - c_answer) < 0.001) {
            cout << "正解" << endl;
        }
        else {
            cout << "不正解。正解は" << c_actual << "だよ!" << endl;
        }
        cout << "もう一度やりますか？ (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}
