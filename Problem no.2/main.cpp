//Name:Jameson M. Villaluna
//Date: November 10,2018
#include<cstdlib>
#include<cstring>
#include<iostream>


using namespace std;
int main(){
  
   int Row;
    char sChar[10] = {'A','B','C','D','E','F','G','H','I','J'};
   cout << "Enter the number maximum of 10: ";
    cin >> Row;
    for (int i = 0 ;i <= Row; i++)
    {
        for (int t = Row; t > i ; t--)
       {
            cout << " ";
        }
       for (int j = 1; j <= 2*i - 1 ; j++){
           cout << sChar[i-1];
        }
        cout << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}
      
 
