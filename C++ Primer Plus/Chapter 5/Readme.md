## 5_1
```
#include <iostream>

int main()
{   
    using namespace std;
    int smallNum, bigNum, sum;
    sum = 0;
    cout <<"Enter the smaller number: " ;
    cin >> smallNum;
    cout << "Enter the bigger number: ";
    cin >> bigNum;
    for (int i = smallNum; i <= bigNum; i++)
    {
        sum += i;
    }
    cout << sum << endl;

}
```

## 5_2
```
#include <iostream>
#include <array>

int main()
{   
    using namespace std;
    const int ArSize = 100;
    long double result = 1;
    array<long double, ArSize> num;
    for (int i = 0; i < ArSize; i++)
        num[i] = i + 1;
    for (int j = 0; j < ArSize; j++)
        result *= num[j];
    cout << "Result=" << result << endl;
    return 0;
}
```

## 5_3
```
#include <iostream>

int main()
{   
    using namespace std;
    double num, sum;
    sum = 0;
    cout << "Enter a number(enter 0 to quit): ";
    cin >> num;
    while (num != 0)
    {
        sum += num;
        cin >> num;
    }
    cout << sum << endl; 
    return 0;
}
```

## 5_4
```
#include <iostream>

int main()
{   
    using namespace std;
    unsigned int year = 0;
    double curDap, curCleo;
    curDap = 100;
    curCleo = 100;
    while (curCleo <= curDap)
    {
        year++;
        curDap += 10;
        curCleo += curCleo * 0.05;
    }
    cout << year << endl;
    return 0;
}
```

## 5_5
```
#include <iostream>

int main()
{   
    using namespace std;
    const int mouth = 12;
    unsigned int total_sale = 0;
    int sale_each_mouth[mouth];
    char * mouths[mouth] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < mouth; i++)
    {
        cout << mouths[i]<<":\t";
        cin >> sale_each_mouth[i];
        total_sale += sale_each_mouth[i];
    }
    cout << "The total sale of this year is " << total_sale << endl; 
    return 0;   
}
```

## 5_6
```
#include <iostream>

int main()
{   
    using namespace std;
    
    const int Month = 12; 
    const int Year = 3;
    unsigned int total_sale = 0;

    int sale_each_month[Month]; 
    char * months[Month] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[Year][Month]; 

    for (int i = 0; i < Year; i++)
    {
        unsigned int sale_each_year = 0; // Reset to 0 for each year
        cout << "Enter the monthly sales volume for year " << i + 1 << endl;
        for (int j = 0; j < Month; j++)
        {
            cout << months[j] << ":\t";
            cin >> sales[i][j]; // Directly storing the input in the sales array
            sale_each_year += sales[i][j];
        }
        cout << "The total sales in year " << i + 1 << " is " << sale_each_year << endl;
        total_sale += sale_each_year;
    }
    cout << "The total sale of 3 years is: " << total_sale << endl;
    return 0;
}
```

## 5_7
```
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
```

动态内存管理
动态内存分配：使用 new 关键字可以在程序运行时动态地分配内存。例如，`int* p = new int;` 会分配一个整数大小的内存，并返回该内存地址的指针赋给 p。
初始化：new 也可以用来初始化动态分配的内存，例如 `int* p = new int(10);` 分配并初始化一个整数，其值为10。
数组的动态分配：new 可以分配一个数组，例如，`int* arr = new int[10];` 分配一个有10个整数的数组。
释放内存：使用 delete 关键字来释放由 new 分配的内存。对于单个对象，使用 `delete p;`，而对于**数组**，使用 `delete[] arr;`

-> 是一个成员访问操作符，用于指针访问其指向对象的成员

pPerson->name 是 (*pPerson).name 的简写形式，两者效果相同，但是 -> 更加简洁易读。

array：`array<int,5> arr = {1, 2, 3, 4, 5};`
vector: `vector<int> vec = {1, 2, 3, 4, 5};`
