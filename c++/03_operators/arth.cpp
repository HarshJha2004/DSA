#include<iostream>
using namespace std; 

int main(){
    //  three types of operator is there.
        // 1.unary
        // 2.Binary
        // 3.Ternary
    int numberOfCups;
    float pricePerCups, totalPrice, discountedPrice;

    cout << "Enter the Number of Cups : " ;
    cin >> numberOfCups;
    cout << "Price per Cups : ";
    cin >> pricePerCups;

    totalPrice = numberOfCups * pricePerCups;

    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "The total Price after discount : " <<  discountedPrice;

    }
    else{
        cout << "The total price is " << totalPrice;
    }
 
}