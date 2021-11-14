#include <iostream>
using namespace std;
int main() {
    int i=0,n=0,primo=1,secondo=0,risultato;
    cin>>n;
    if(n>=2){
        for(int i=1;i<=n;i++){
            risultato=primo+secondo;
            primo=secondo;
            secondo=risultato;
            cout<<risultato<<endl;
        }
    }else{
        cout<<"errore"<<endl;
    }
return 0;
}
