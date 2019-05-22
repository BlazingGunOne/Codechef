#include <iostream>
using namespace std;

int main() {
    int N,r;
    cin>>N>>r;
    int R[N];
    for(int i=0;i<N;i++)
    { cin>>R[i]; }
    for(int i=0;i<N;i++)
    { if(R[i] >= r)
      cout<<"Good boi"<<endl;
      else
      cout<<"Bad boi"<<endl;
    }

}
