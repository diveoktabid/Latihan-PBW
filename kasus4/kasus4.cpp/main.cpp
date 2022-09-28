#include <iostream>

using namespace std;

int main()
{
    cout << "UPAH REGULER (TIDAK LEMBUR)" << endl;

    int upahreguler, upah, regulerjamkerja, totalupahreguler;
    cout <<"input upah reguler : ";
    cin >> upah;
    cout <<"input reguler jam kerja : ";
    cin >> regulerjamkerja;
    upahreguler = upah * regulerjamkerja;
    cout << upahreguler << " adalah upah reguler yang di dapat";

    int overpay;
    if(jam > 40){
         overpay = (jam - 40)*(upah*0.3);
         cout << "overpay =" << overpay << endl;

        }









    return 0;
}
