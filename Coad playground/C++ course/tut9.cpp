 #include<iostream>
 using namespace std;

int main(){
// cout<<"this is tutorial 9 ";
int age;
cout<<"tell me your age "<<endl;
cin>>age;
// selection control structure : if else - else if letter 
// if((age<18) && (age<0)){
//     cout<<"you can not come to my party "<<endl;
// }
// else if (age==18) {
// cout<<"you are a kid and you will get a kid pass to the party "<<endl;
// }
// else if(age<9){
//     cout<<"you are not yet born "<<endl;
// }


// else {
//     cout<<"you can come to the party"<<endl;
// }
//selection control structure:switch case
switch(age)
{
    case 18:
    /* coad */
    cout<<"you are 18";
    // break; 
case 22:
cout<<"your age is 22"<<endl;
;
  default:
cout<<"no special cases"<<endl;


  break;






}




return 0;
 }