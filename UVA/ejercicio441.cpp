#include <iostream>
using namespace std;

int main(){
    int k,y;
    while(cin>>k && k<13 && k>6 && k!=0){
        int num[k];
        for(int i=0;i<k;i++){
            cin>>y;
            num[i]=y;
        }
        for(int a=0;a<k-5;a++){
            for(int b=a+1;b<k-4;++b){
                for(int c=b+1;c<k-3;++c){
                    for(int d=c+1;d<k-2;++d){
                        for(int e=d+1;e<k-1;++e){
                            for(int f=e+1;f<k;++f){
                                cout<<num[a]<<" "<<num[b]<<" "<<num[c]<<" "<<num[d]<<" "<<num[e]<<" "<<num[f]<<endl;
                            }
                        }
                    }
                }
            }
        }
    }


}