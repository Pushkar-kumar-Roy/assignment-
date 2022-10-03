https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true


#include"iostream"
#include"string"
using namespace std;

int main(){
    string str;
    cin>>str;
    if(str[8]=='P'||str[8]=='p')
    {
        if(str[0]=='1'&&str[1]=='2'){
            cout<<"12";
            for(int i=2;i<8;i++)
            {
                cout<<str[i];
            }
        }
        else{
        char c1=str[0];
        char c2=str[1];
        int x=c1-'0';
        int x2=c2-'0';
        int y=(x*10)+x2;
        int z=y+12;
        cout<<z;
        for(int i=2;i<8;i++)
        {
            cout<<str[i];
        }
        }
    }
    else {
        if(str[0]=='1'&&str[1]=='2'){
            cout<<"00";
            for(int i=2;i<8;i++)
            {
                cout<<str[i];
            }
        }
        else{
    for(int i=0;i<8;i++)
    {
        cout<<str[i];
    }
        }
    }
    
   return 0;
}
