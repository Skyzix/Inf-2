#include <iostream>

using namespace std;

int main() {
    char a,c;
    
    // How far should letter jump
    int jump;
    
    cout << "Podaj szyfr i wciœnij enter" << endl;
    cin >> a;
    
    cout << "Podaj o ile ma pszesunac" << endl;
    cin >> jump;
    
    // If user asking for too high jump level
    if(jump >= 26 || jump <= -26) 
    {
    	jump = jump % 26;
    }
    
    int nr = (int)a;
    cout << nr << endl;
    
    // Uppercase letter
    if(nr > 64 && nr < 91)
    {
    	if(jump > 0) 
    	{
				if(nr < 91 - jump)
				{
					nr = nr + jump;
				}
				else 
				{
					nr = nr - 26 + jump; 
				}
      }
      else 
      {
      	// jump <= 0, so nr will be smaller after that operation
      	if(nr + jump > 64) 
      	{
      		nr = nr + jump;
      	}
      	else 
      	{
      		nr = nr + jump + 26;
      	}	
      }       
    }
    
    // Lowercase letter
    else if(nr > 96 && nr < 123)
    {
    	if(jump > 0)
    	{
    		if(nr < 123 - jump)
				{
					nr = nr + jump;
				}
				else 
				{
					nr = nr - 26 + jump;
				}
    	}
    	else 
    	{
    		// jump <= 0, so nr will be smaller after that operation
      	if(nr + jump > 96) 
      	{
      		nr = nr + jump;
      	}
      	else 
      	{
      		// For example nr=97 ('a'), jump=-4 then nr = 97 + (-4) + 26 = 119
      		nr = nr + jump + 26;
      	}	
    	}
    }
    
		
		cout << (char)nr;
    
    cin >> c;
	return 0;
}
