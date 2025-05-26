#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include <stdexcept> // For exception handling
using namespace std;

struct names{
    string name;
    float price;
};
int main(){
    names ch[100]; // Reduced size for example
    int count = 0 ;
ifstream kl("temp1.txt");
string line;
while(count < 100 && getline(kl , line)){
    size_t find = line.rfind((','));
    if(find != string::npos){
        ch[count].name = line.substr(0,find);
        ch[count].price = stof(line.substr(find+1));
        count++;
 }}
kl.close();

for(int i=0; i<count-1; i++){
    for(int j=0; j<count-i-1; j++){
        if(ch[j].name > ch[j+1].name){
            names temp =ch[j];
            ch[j] = ch[j+1];
            ch[j+1] = temp;
        }
    }
}


ofstream in("temp.txt");
for(int i=0; i<count; i++){
    cout << ch[i].name << " - " << ch[i].price << endl;
    in << ch[i].name << "," << ch[i].price << endl;
}
in.close();


    return 0;
}