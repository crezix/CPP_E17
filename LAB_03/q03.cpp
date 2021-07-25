#include<iostream>
#include<iomanip>
using namespace std;

void pattern(int n){
    int spacing = n - 1;
    int stars = 1;

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
        pattern(1);
        return 0;
}
