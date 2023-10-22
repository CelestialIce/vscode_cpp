#include <iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

using namespace std;

void show_box(box a){
    cout<<a.maker<<" "<<a.height<<" "
    <<a.width<<" "<<a.length<<" "<<a.volume
    <<endl;
}

void set_box(box* a){//如果要在函数里改变
    a->volume=a->height*a->width*a->length;
}

int main()
{
    box a{"strong",30,30,30};
    set_box(&a);
    show_box(a);


    return 0;
}
