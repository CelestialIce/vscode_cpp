#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char word[20];
    char done[20]{"done"};
    int count=0;
    cout<<"Enter words (to stop, type the word done:)";
    while(cin>>word){
        if(strcmp(word,done)==0)
            break;
        count++;
    }
    cout<<"You entered a total of "<<count<<" words.";

    return 0;
}
