#include <iostream>

using namespace std;

int DeretFibonacci(int n);

int main(){
    int nilai, hasil;
    cout << "Menghitung Deret Fibonacci ke- : ";
    cin >> nilai;
    hasil = DeretFibonacci(nilai);

    cout << "nilainya adalah = " ;
    cout << hasil << endl;
    cin.get();
    return 0;

}

int DeretFibonacci(int n){
    cout << " fungsi fibonacci " << n << endl;
    if((n==0) || (n == 1)){
        return n;
    }else{
        return DeretFibonacci(n-1) + DeretFibonacci (n-2);
    }
}
