#include<bits/stdc++.h>
using namespace std;

class Myclass{
    int y;
    public:
        void y_setter(int cnt1){
            y=cnt1;
        }
        int y_returner(){
            return y;
        }
};
int main(){
    Myclass my_obj;
    my_obj.y_setter(10);
    cout<<my_obj.y_returner();
}
//encapsulationṇṇṇṇ