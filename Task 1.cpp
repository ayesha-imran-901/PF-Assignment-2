#include <iostream>
using namespace std;
int main() {
        int total;
    float priceA = 50.0; 
    float priceB = 30.0; 
    float priceC = 20.0;
    int qA,qB,qC;
    cout<<"Enter the quantity of product A: ";
    cin>>qA;
    cout<<"Enter the quantity of product B: ";
    cin>>qB;
    cout<<"Enter the quantity of product C: ";
    cin>>qC;
    total=(priceA*qA)+(priceB*qB)+(priceC*qC);
    cout<<"Total Cost: $"<<total;

    return 0;
}