#include <iostream>

using namespace std;

int main(){
    int i = 0;
    while(i == 0){
        string name;
        int num = 10;
        cout << "Enter name : ";
        cin >> name;
        cout << "Hello "<< name << " "<< num << endl;
        const float PI = 3.14;
        cout << PI << endl; 
        cout << "Bye bye!"<<endl;
        cout << "good night " << name << endl;
        i++;
    }  
}
