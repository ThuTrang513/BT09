#include<iostream>
using namespace std;
char* concat(const char* a, const char* b){
    int dem = 0;
    int i = 0;
    while(*(a+i) != NULL){
        dem++;
        i++;
    }
    i = 0;
    while(*(b+i) != NULL){
        dem++;
        i++;
    }
    char *p = new char[dem];
    i = 0;
    int j = 0;
    while(*(a+i) != NULL){
        *(p+j) = *(a+i);
        j++;
        i++;
    }
    i = 0;
    while(*(b+i) != NULL){
        *(p+j) = *(b+i);
        j++;
        i++;
    }
    return p;
}
int main(){
    cout << concat("hello","world");
}
