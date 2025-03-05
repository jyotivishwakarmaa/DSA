#include<iostream>
using namespace std;

namespace cybrom{
    void student(){
        cout<<"\nstudent\n";

    }
    namespace bhopal{
        void student(){

            cout<<"\nbhopal\n";
        }
    }
}
// using namespace cybrom
int main()
{
    cybrom::student();
    cybrom::bhopal::student();
}