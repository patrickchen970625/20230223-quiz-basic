#include <iostream>
using namespace std;
int main() {
 string mail, password;
 int foul = 0;
 int level = 0;
 int level2 = 0;
 int level3= 0;
 int level4 = 0;
 int level5 = 0;
 cout << "輸帳號";
 cin >> mail ;
    
    if(mail[0] != 'a'){
        foul++;
    }
    for(int i = 1; i<7 ; i++){
        if(mail[i] <48|| mail[i]>57){
            foul++;
        }
    if(mail[7] != '@'|| mail[8] != 'g'||mail[9] !='m'||mail[10] !='a'||mail[11] != 'i'||mail[12] != 'l'||mail[13] != '.'||mail[14] != 'c'||mail[15] != 'o'||mail[16] != 'm'){
            foul++;
        }
    
        
  
        }if(foul == 0){
        cout << "成功";
        }
    else if(foul!=0){
        cout<< "失敗";
        }        
else{
    cout <<"輸密碼";
    cin >>password;
        if(password.size() >= 8){
            cout<<"ok";
            }
    }

    }