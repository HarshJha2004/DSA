#include<iostream>
using namespace std;

    void PrintNumbers(){
        for(int i=1;i<=100;i++){
            cout << i << endl;
        }
    }

    int SimpleInterest(int P, int R, int T){
        int ProcessInterest = (P*R*T)/100;
        return ProcessInterest;
    }

    int PrintPrimeNumbers(int n){
        // int Process = 

    }

    //Main function.
    int main(){
        int AnswerInterest = SimpleInterest(5000,5,5);
        cout << AnswerInterest;
    }
    