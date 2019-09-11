#include <iostream>
#include <string>

using namespace std;

string text;
string words[1001];//< 601 slovo maxsumym/massuv sliv
int c=0;//rahuye kilkist sliv (z nolya)
int i=0;//pobykvennuy schetchuk
int l=0;//dovzh slova
int t=0;//nomer naydovshogo slova

int mainam()
{
    cout<<"Type your text sample here (in one line) :"<<endl;
    getline(cin,text);cout<<text<<endl;
    while(text[i]){//'\0'==0 vse inshe 1
        if(text[i]==' '&&text[i+1]==' ')continue;//yaksho kilka probeliv
        if (text[i]==' '){//perehodum do novogo slova
                c++;
                i++;
                continue;}

        words[c]+=text[i++];//zapus bykvy y slovo
    }

    for(int j=0;j<=c;j++){//poshuk neaybilshogo slova
        if(words[j].size()>l){
            l=words[j].size();
            t=j;
        }
    }
    cout<<"The longest word is "<<words[t]<<' '<<"it\'s length is "<<words[t].size()<<endl;
    return 0;
}
