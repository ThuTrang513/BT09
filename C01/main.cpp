
#include<iostream>
#include<cstring>
using namespace std;
char * reverse(const char a[]){
    string s = "";
    int dem = 0;
    const char * p = a;
    int k = 0;
    while( *(p+k)!= NULL){
        s += *(p+k);
        k++;
        dem++;
    }
    char *q = new char[dem];
    for(int i = dem-1; i >= 0; i--){
        *(q + dem-1-i) = s[i];
    }
    return q;
    //cout << p;
}
/*char* update(char * a){
    char * t = a;
    while(*a != NULL){
        *a = *(a+1);
        a++;
    }
    return t-1;
}*/
char *delete_char (const char *a,char c){
    int i = 0,dem = 0;
    while(*(a+i) != NULL){
        i++;
        if(a[i] != c){
            dem++;
        }
    }
    char *q = new char [dem];
    int j = 0;
    for(int i = 0; i < dem; i++){
        while (a[j] == c){
            j++;
        }
        q[i] = a[j];
        j++;
    }
    return q;
}
char* pad_left(const char a[], int n){
    int dem = 0;
    const char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    char *q ;
    if(dem < n){
        q = new char[n];
        int k = n - dem;
        for(int i = 0; i < n; i++){
            if(i < k) *(q+i) = '-';
            else *(q + i) = *(a + i - k);
        }
        *(q+n) = NULL;
        return q;
    }
    else{
        q = new char[dem];
        for(int i = 0; i < dem; i++){
            *(q+i) = *(a+i);
        }
        return q;
    }
}
char* pad_right(const char a[], int n){
    int dem = 0;
    const char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    if(dem < n){
            char *q = new char[n];
            int k = n - dem;
        for(int i = n-1; i >= dem; i--){
            *(q+i) = '-';
        }
        for(int i = 0; i < dem; i++){
            *(q+i) = *(a+i);
        }
        *(q+n) = NULL;
        return q;
    }
    else{
        char *q = new char[n];
        for(int i = 0; i < dem; i++){
            *(q+i) = *(a+i);
        }
     return q;
    }

}
char* truncate(const char a[], int n){
    int dem = 0;
    const char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    if(dem > n){
        char *q = new char[n];
        for(int i = 0; i < n; i++){
            *(q+i) = *(a+i);
        }
        return q;
    }
    else{
        char*q = new char[dem];
        for(int i = 0; i < dem; i++){
            *(q+i) = *(a+i);
        }
    return q;
    }
}
bool is_palindrome(char a[]){
    int dem = 0;
    char *p = a;
    while(*p != NULL){
        dem++;
        p++;
    }
    for(int i = 0; i <= dem/2; i++){
        if(*(a+i) != *(a + dem-1-i)) return false;
    }
    return true;
}
char* trim_left(const char a[]){
    int i = 0;
    while(*(a+i) == ' '){
        i++;
    }
    int k = i;
    int dem = 0;
    while(*(a+i) != NULL){
        i++;
        dem++;
    }
    char * q = new char[dem];
    i = 0;
    while(*(a+k) != NULL){
        *(q+i) = *(a+k);
        k++;
        i++;
    }
    return q;
}
char* trim_right(const char a[]){
    int dem = 0;
    const char *p = a;
    while(*p != ' '){
        p++;
        dem++;
    }
    char *q = new char[dem-1];
    int i = 0;
    while(*a != ' '){
        *(q + i) = *a;
        a++;
        i++;
    }
    //*(q+dem-1) = NULL;
    return q;
}
int main(){
    //char a[100];
    //gets(a);
    //char c;
    //cin >> c;
    //cout << delete_char(a,c);
    /*int n;
    cin >> n;
    truncate(a,n);*/
    //cout << is_palindrome(a);
    //cout << a;
    //cout << reverse(a);
    //cout << delete_char ("abcdefeefghjkelm",'e')<< endl;
    //cout << pad_left("abcdef", 10);
    //cout << pad_right("abcdef", 10);
    //cout << truncate("abcdef", 5);
    //cout << trim_left("    abcdef");
    cout << trim_right("abcdef   ");
}
