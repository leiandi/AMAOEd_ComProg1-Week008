//Name:Jameson M. Villaluna
//Date: November 10,2018
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;
int main(){
 int n[6];
    for (int i = 0; i < 6; i++){
        cout << "enter the number["<< i+1 <<"]";
        cin >> n[i];
    }
    for (int i = 0; i < 6; i++){
        for (int t = 0;t < 6; t++){
            if(n[i] < n[t]){
                 int temp = n[i];
                 n[i]=n[t];
                 n[t]=temp;
            }
        }
    }
    cout <<"The sorted numbers are: "<<n[0]<<","<<n[1];
    cout <<","<<n[2]<<","<<n[3]<<","<<n[4]<<","<<n[5]<<".\n";
    system("pause");
    return EXIT_SUCCESS;
}
