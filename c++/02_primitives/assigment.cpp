#include <iostream>
using namespace std;

int main(){

    string typeOfTea;
    int teaPricePerKg;
    string ratingOfTea;

    cout << "Which type of tea you have : " << endl;
    cin >> typeOfTea;

    cout << "What it's price ?" << endl;
    cin >> teaPricePerKg;

    cout << "And give me customers ratings" << endl;
    cin >> ratingOfTea;


    cout << "Here the type of tea is : " << typeOfTea << ", " << "and it's price is : " << teaPricePerKg << ", " << "and the rating is : " << ratingOfTea;

    return 0;
    }