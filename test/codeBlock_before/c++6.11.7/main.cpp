#include <iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    cout << "Enter words (q to quit):" << endl;
    string word;
    int vowels=0,consonants=0,others=0;
    while(cin>>word){
            if(word[0]=='q')
                break;
        if(isalpha(word[0])){
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||
               word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(isdigit(word[0])){
            cin.get();
            others++;
        }
        else
            others++;
    }
    cout<<vowels<<" words beginning with vowels"<<endl;
    cout<<consonants<<" word beginning with consonants"<<endl;
    cout<<others<<" others"<<endl;


    return 0;
}
