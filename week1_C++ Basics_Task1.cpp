
#include <iostream>
using namespace std;

int main()
{

    string customerName, phoneModel;
    int quantityBought;
    double pricePerPhone, totalSalesAmount;
    cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
    
    cout << "Enter customer name:"<<endl;
    cin>>customerName;

    cout << "Enter phone model purchased:"<<endl;
    cin>>phoneModel;

    cout << "Enter quantity bought:"<<endl;
    cin >> quantityBought;

    cout << "Enter price per phone:"<<endl;
    cin >> pricePerPhone;

    totalSalesAmount = quantityBought * pricePerPhone;

    
    cout << "========================================"<<endl;;
    cout << "MOBILE PHONE SHOP RECEIPT"<<endl;
    cout << "========================================"<<endl;
    cout << "Customer Name:"<< customerName<< endl;
    cout << "Phone Model:"<< phoneModel<< endl;
    cout << "Quantity Bought:"<< quantityBought<< endl;
    cout << "Price Per Phone:"<< pricePerPhone<< endl;
    cout << "----------------------------------------"<<endl;
    cout << "Total Sales Amount:"<< totalSalesAmount<< endl;
    cout << "========================================\n";
    cout << "Thank you for shopping:"<<endl;
    cout << "========================================"<<endl;

    return 0;
}

