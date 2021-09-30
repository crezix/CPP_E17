#include<iostream>
#include<iomanip>
using namespace std;

void pattern(int n){
    int spacing, stars;

    for (int i = 0; i < n;i++){
        stars = 2 * i + 1;
        spacing = n - i;

        cout << setw(spacing);

        for (int st = 0; st < stars;st++){
            cout <<"*";
        }
        cout << endl;
    }

    for (int i = n-2; i >= 0;i--){
        stars = 2 * i + 1;
        spacing = n - i;

        cout << setw(spacing);

        for (int st = 0; st < stars;st++){
            cout <<"*";
        }
        cout << endl;
    }
}

    int main()
    {
        int rows;
        cout << "Enter the number of rows: ";
        cin >> rows;
        pattern(rows);
        return 0;
}
