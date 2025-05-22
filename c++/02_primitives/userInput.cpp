#include <iostream>
#include <string>
using namespace std;

int main(){
    string userTea;
    int TeaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    cout << "How many cups of " << userTea << "would you like to have ? ";
    cin >> TeaQuantity;

    cout << TeaQuantity;
    cout << userTea;
    return 0;
}