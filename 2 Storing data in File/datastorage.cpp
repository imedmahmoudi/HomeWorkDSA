//this code can create a text file in system
//and put inside it wiched data
#include "datastorage.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
      ofstream writer("datafile.txt" );
       if (writer.is_open())
        {
            int datasize =1000;
            writer << "extracted  data"<< endl;
            writer << "more data extracted"<< endl;
            writer << "there are:" << datasize << "data in bit" <<endl ;
            cout <<"writing was allowed!" << endl;

        }
        else
        {
            cout <<" error of autorisation" << endl ;
        }
        writer.close();
        system("pause");
        return 0;


}
