//Name:Jameson M. Villaluna
//Date: November 10,2018
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;
int main(){
 int n[6];
    for (int i = 0; i < 5; i++){
        cout << "enter the number["<< i+1 <<"]";
        cin >> n[i];
    }
    cout <<"The numbers you entered are: "<<n[0]<<","<<n[1];
    cout <<","<<n[2]<<","<<n[3]<<","<<n[4]<<"."<<"\n";
    
    system("pause");
    return EXIT_SUCCESS;
}
