#include <iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    string done{"done"};
    int count=0;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    while(cin>>word){
        if(word==done)
            break;
        count++;
    }
    cout<<"You entered a total of "<<count<<" words.";

    return 0;
}
