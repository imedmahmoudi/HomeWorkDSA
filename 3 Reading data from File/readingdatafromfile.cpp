//this code can read data from a text file in the system
//read A & B variables and add them together.

#include <iostream>
#include <fstream>
 using namespace std;


 int main()
 {
    ifstream reader("filetoread.txt");
    int a,b;
    if (reader.is_open())
    {
        reader >> a ;
        reader >> b ;

        cout << "sum of variables a and b is" << a + b <<endl;
    }
     else
    {
        cout << "error" << endl;

    }
    reader.close();
    system("pause");
    return 0 ;

}

