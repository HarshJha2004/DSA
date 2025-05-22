#include<iostream>
using namespace std;

int main(){
    
    int customerBuy;

    cout << "Enter the Number of tea cups : ";
    cin >> customerBuy;

    if(customerBuy > 20){
        cout << "Congrat's you got a Golden Badge ";
    }
    else if(customerBuy >10 && customerBuy < 20){
        cout << "You got a silver badge";
    }
    

    return 0;
}