#include<iostream>
using namespace std;

int main(){
    int teabags;

    cout << "Enter the number of teabags you have :";
    cin >> teabags;

    if (teabags < 10)
    {
        // teabags = teabags + 5
        teabags += 5;
    }
    cout << "The total Tea Bags is : " << teabags;
    

    return 0;
}