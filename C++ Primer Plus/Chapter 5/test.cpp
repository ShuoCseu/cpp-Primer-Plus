#include <iostream>
#include <string>

int main()
{
    using namespace std;

    int cars;
    struct Cars
    {
        string make;
        unsigned int year;
    };
    
    cout << "How many cars do you wish to catalog? ";
    cin >> cars;
    cin.get(); // 清除换行符
    Cars *psome = new Cars[cars];
    for (int i = 0; i < cars; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, (psome+i)->make); // 使用 getline 读取字符串
        cout << "Please enter the year made: ";
        cin >> (psome+i)->year;
        cin.get(); // 清除换行符
        cout << endl;
    }
    
    cout << "Here's your collection: " << endl;
    for (int i = 0; i < cars; i++)
    {
        cout << (psome+i)->year << "\t" << (psome+i)->make << endl;
    }
    
    delete [] psome;

    return 0;
}
