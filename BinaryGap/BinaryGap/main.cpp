#include <iostream>

using namespace std;

int solution(int N){
    int out,counter=0;
    //int counter=0;
    int div=1;
    string bin;
    while(div*2<=N){
        div*=2;
    }
    while(div>0){
        if(N-div>=0){
            bin.push_back('1');
            N-=div;
            div/=2;

        }
        else{
            bin.push_back('0');
            div/=2;
        }
    }
    for(unsigned int i=0;i<bin.length();i++){
        if(bin[i]=='1'){
            if(out<counter){
                out=counter;

            }
        }
        else{
            counter+=1;
        }
    }
    return out;
}
int main()
{
    int input;
    cout<<"Enter a number:"<<endl;
    cin>>input;
    cout<<"Solution:"<<endl;
    cout << solution(input) << endl;
    return 0;
}
