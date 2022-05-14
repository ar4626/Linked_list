#include <iostream>


using namespace std;


int main()
{
    int students[20][5], below50 = 0;
    double averageMark;
    for (int i = 0; i < 20; i++) {
        double foo = 0;
        for (int j = 0; j < 5; j++) {
            cin >> students[i][j];
            foo += students[i][j];
            if (students[i][j] < 50) below50++;
        }
        foo/=5;
        cout << "Student " << i << " average " << foo << '\n';
    }
    cout << "Below 50: " << below50 << '\n';
    return 0;
}