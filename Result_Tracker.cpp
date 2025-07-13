#include <iostream>
using namespace std;

int main() {
    float Maths, English, Physics, Chemistry, ICT, Biology, DP, Economics, 
    Geography, FurtherMaths, Total, Percentage;
    cout << "Input Your Score Below" << endl;

    cout << "Maths: " << endl;
    cin >> Maths;
    cout << "English" <<endl;
    cin >> English;
    cout << "Physics" <<endl;
    cin >> Physics;
    cout << "Chemistry" <<endl;
    cin >> Chemistry;
    cout << "ICT" <<endl;
    cin >> ICT;
    cout << "Biology" <<endl;
    cin >> Biology;
    cout << "DP" <<endl;
    cin >> DP;
    cout << "Economics" <<endl;
    cin >> Economics;
    cout << "Geography" <<endl;
    cin >> Geography;
    cout << "FurtherMaths" <<endl;
    cin >> FurtherMaths;

    Total = (Maths + English + Physics + Chemistry + ICT + Biology + DP + Economics + 
    Geography + FurtherMaths )  ;

    Percentage = Total * 100 / 300;
    cout << "Your Total Score is: " <<Percentage <<"%"  << endl;

    if (Percentage >= 90)
    cout << "Excellent" <<endl;
else
    if (Percentage >= 80)
    cout << "VeryGood" <<endl;
else
    if (Percentage >= 70)
    cout << "Good" << endl;
else
    if (Percentage >= 60)
    cout << "Average" << endl;
else
    if (Percentage <= 60)
    cout << "Fail" << endl;

    system("pause");

}
