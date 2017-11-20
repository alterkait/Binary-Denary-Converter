#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int b1, b2, b3, b4, b5, b6, b7, b8;
  int DECIMAL;
  
  cout << "Binary-Decimal Converter." << endl;
  cout << "\nEnter a byte in 8-bit form, seperating each bit with a new line." << endl;
  cout << "\nMake sure the first input is the left most bit. " << endl;
  
  cin >> b1;
  
  if (b1 == 1)
  {
    DECIMAL = 128;
  }
  else
  {
    DECIMAL = 0;
  }
  
    cin >> b2;
    
    if (b2 == 1)
    {
      DECIMAL = 64 + DECIMAL;
    }
    else
    {
      DECIMAL = 0 + DECIMAL;
    }
    
      cin >> b3;
      
      if (b3 == 1)
      {
        DECIMAL = 32 + DECIMAL;
      }
      else
      {
        DECIMAL = 0 + DECIMAL;
      }
      
        cin >> b4;
      
        if (b4 == 1)
        {
          DECIMAL = 16 + DECIMAL;
        }
        else
        {
          DECIMAL = 0 + DECIMAL;
        }
  
          cin >> b5;
      
          if (b5 == 1)
          {
            DECIMAL = 8 + DECIMAL;
          }
          else
          {
            DECIMAL = 0 + DECIMAL;
          }
          
            cin >> b6;
      
            if (b6 == 1)
            {
              DECIMAL = 4 + DECIMAL;
            }
            else
            {
              DECIMAL = 0 + DECIMAL;
            }
  
              cin >> b7;
      
              if (b7 == 1)
              {
                DECIMAL = 2 + DECIMAL;
              }
              else
              {
                DECIMAL = 0 + DECIMAL;
              }
              
                cin >> b8;
      
                if (b8 == 1)
                {
                  DECIMAL = 1 + DECIMAL;
                }
                else
                {
                  DECIMAL = 0 + DECIMAL;
                }
  
  cout << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << " = " << DECIMAL << endl;
      
  
  return 0;
}
