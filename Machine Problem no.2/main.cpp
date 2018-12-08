#include<iostream>

using namespace std;

int main(){
    int SeatNumber,i,t,count,ask;
    int a[5][7] = {{1,2,3,4,5,6,7},{8,8,10,11,12,13,14},{15,16,17,18,19,20,21},
                    {22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
    for(i = 0; i < 5; i++){
        for( t = 0; t < 7; t++){
            cout << a[i][t] << "\t";
        }
        cout << endl;
    }
b:
    if(ask ==1){
        for(i = 0; i < 5; i++){
            for ( t = 0; t < 7; t++){
                if(SeatNumber==a[i][t]){
                    a[i][t] = 0;
                    count++;
                }
                cout << a[i][t] << "\t";
            }
            cout << endl;
        }
    }
    cout << "Enter Seat Number to reserve: ";
    cin >> SeatNumber;
    count = 0;
system("cls");
    for( i =0; i < 5; i++){
        for ( t = 0; t < 7; t++){
            if(SeatNumber==a[i][t]){
                a[i][t] = 0;
                count++;
            }
            cout << a[i][t] << "\t";
        }
        cout << endl;
    }
    if (count ==0){
        if((SeatNumber >0) && (SeatNumber < 36)){
            cout << "\nSeat is Taken\n";
        }else{
            cout << "\nInvalid Seat number\n";
        }
    }else{
        cout << "\nSeat Successfully reserved\n";
        ask = 1;
    }
    system("pause");
    system("cls");
goto b;
    return EXIT_SUCCESS;

}