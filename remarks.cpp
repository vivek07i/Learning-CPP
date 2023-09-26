#include <iostream>
using namespace std;

int main()
{
    int score;

    // Input the student's score
    cout << "Enter the student's score: ";
    cin >> score;

    // Check the score and provide the remark
    if (score >= 75 && score <= 100)
    {
        cout << "Distinction" << endl;
    }
    else if (score > 50 && score < 75)
    {
        cout << "Average" << endl;
    }
    else if (score >= 35 && score <= 50)
    {
        cout << "Below Average" << endl;
    }
    else
    {
        cout << "Invalid Score" << endl;
    }

    return 0;
}
