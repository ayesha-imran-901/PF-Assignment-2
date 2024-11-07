#include <iostream>
using namespace std;
int main() {
    float priceA = 50.0;
    float priceB = 30.0;
    float priceC = 20.0;
    int qA,qB,qC;
    cout<<"Enter the quantity of Product A: ";
    cin>>qA;
    cout<<"Enter the quantity of Product B: ";
    cin>>qB;
    cout<<"Enter the quantity of Product C: ";
    cin>>qC;
    float total =(priceA*qA)+(priceB*qB)+(priceC*qC);
    float finalTotal = (total>200)?total*0.9:total;
    float shipping = (finalTotal<150)?15:0;
    cout<<"Total after discount and shipping:$"<<finalTotal + shipping<<endl;
    return 0;
} 