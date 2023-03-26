#include <iostream>
using namespace std;

int main(){
    int nilai;
    
    cout << " masukan nilai:";
    cin >> nilai;
    
    if (nilai > 80 ){
        cout << " nilai A" << endl;
    } else if ( nilai > 70 ){
        cout << "nilai B " << endl ;
    } else if ( nilai > 60 ){
        cout << " nilai C";
    }else if ( nilai > 50 ) {
        cout << " nilai D" << endl ;
    }else {
        cout << "nilai E" << endl ;
    }
    
    return 0;
}