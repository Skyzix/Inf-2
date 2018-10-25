#include <iostream>

using namespace std;

int main() {
    char a,c;
    
    cout << "Podaj szyfr i wciœnij enter" << endl;
    cin >> a;
    int nr = (int)a ;
    cout << nr << endl;
    if(nr>64&&nr<91)
    {
       if(nr>=65&&nr<=67)
       {
                 nr=nr+23;
                 cout <<  (char)nr;
       }
       else
       {
                nr=nr-3;
                cout <<(char)nr;       
       }
       
    }
    
    cin >> c;
	return 0;
}
