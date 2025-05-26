#include <iostream>
#include <string>

using namespace std;

main(){
string name;
cout<<"Enter your name"<<endl;
getline(cin , name);
string newname;


// for(char i : name)
// {
//     if(i !=' '){
//         newname += i;
//     }
// }
//     cout<<"Your name without space is: "<<newname<<endl;

string fin ;
cout<<"Enter the word you want to find"<<endl;
cin>>fin;
size_t line = name.find(fin);
if(line != string::npos){
    cout<<"The word you have to find is: "<<name.substr(line,fin.length())<<endl;
}
else{
    cout<<"The word you have to find is not found"<<endl;
}

}





int* findElement(int *arr, int size, int target) {
    for(int *ptr = arr; ptr < arr + size; ptr++) {
        if(*ptr == target) {
            return ptr;  // Return pointer to found element
        }
    }
    return NULL;  // Not found
}