#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <conio.h>
#include <windows.h>
#include <iomanip>
using namespace std;
int date;
string month;
bool isTitle = false;
void getday(int Byear,int num);
void title();


int main(){
 string ID_num;
 int Byear,Bday;
 char text;
 int ID_Arr[12];
 if(isTitle == false){
        isTitle = true;
        title();
 }

 cout<<"\n please press \"N\" if you have a new ID \n";
 cout<<"       press \"O\" if you have an old ID\n";

    while(true){
        text = getch();
        if(text == 'N'||text == 'n'||text == 'O'||text == 'o'){
            break;
        }
        else{
            cout<<" invalid input\n";
        }
    }



 cout<<endl;
 cout<<" enter your ID number:- ";
 cin>> ID_num;


 for(int i=0;i<12;i++)
 {
    ID_Arr[i]=ID_num[i]-'0';
 }

 if((text=='N')||(text=='n')){
 Byear=(ID_Arr[0]*1000)+(ID_Arr[1]*100)+(ID_Arr[2]*10)+(ID_Arr[3]);
 Bday=(ID_Arr[4]*100)+(ID_Arr[5]*10)+(ID_Arr[6]);

 }
 else if((text=='O')||(text=='o')){
 Byear=(ID_Arr[0]*10)+(ID_Arr[1]);
 Bday=(ID_Arr[2]*100)+(ID_Arr[3]*10)+(ID_Arr[4]);
 }

 getday(Byear,Bday);


 if(Bday>500)
 {
     cout<<" Sex:- female\n";
 }
 else
 {
     cout<<" Sex:- male\n";
 }
 getch();

 cout<<"\n\t\t Press Q to quit or T to try again\n";
 char x;
 while(true){
    x = getch();
    if(x=='T' || x=='t'){
        main();
    }
    else if(x == 'Q'|| x=='q'){
    cout<<endl;
    cout<<"\t                            ----------------------------------------------------------"<<endl;
    cout<<"\t                                             ****** Thank You ******                  "<<endl;
    cout<<"\t                                                    NIC ANALYSIS                       "<<endl;
    cout<<"\t                             Copyright(c) 2021 P.D.B.D.Gunatilake all rights reserved "<<endl;
    cout<<"\t                            ----------------------------------------------------------"<<endl;
        return 0;
    }
    else {
        cout<<"###### Invalid input ######\n";
    }
 }
return 0;
}


void getday(int Byear, int num)
{
    if (num>500 && Byear%4==0)
    num-=500;
    if (num>500 && Byear%4!=0)
    num-=500;


  //  if (Byear%4!=0)
//{

/*if(date<=31)                {date=num    ; month="January"  ;}
if(date>=32  && date<=59 )  {date=num-31 ; month="February" ;}
if(date>=60  && date<=90 )  {date=num-59-1 ; month="March"    ;}
if(date>=91  && date<=120)  {date=num-90-1 ; month="April"    ;}
if(date>=121 && date<=151)  {date=num-120-1; month="May"      ;}
if(date>=152 && date<=181)  {date=num-151-1; month="June"     ;}
if(date>=182 && date<=212)  {date=num-181-1; month="July"     ;}
if(date>=213 && date<=243)  {date=num-212-1; month="August"   ;}
if(date>=244 && date<=273)  {date=num-243-1; month="September";}
if(date>=274 && date<=304)  {date=num-273-1; month="October"  ;}
if(date>=305 && date<=334)  {date=num-304-1; month="November" ;}
if(date>=335 && date<=365)  {date=num-334-1; month="December" ;}
}*/
//if(Byear%4==0){
if(date<=31)                {date=num    ; month="January"  ;}
if(date>=32  && date<=60 )  {date=num-31 ; month="February" ;}
if(date>=61  && date<=91 )  {date=num-60 ; month="March"    ;}
if(date>=92  && date<=121)  {date=num-91 ; month="April"    ;}
if(date>=122 && date<=152)  {date=num-121; month="May"      ;}
if(date>=153 && date<=182)  {date=num-152; month="June"     ;}
if(date>=183 && date<=213)  {date=num-182; month="July"     ;}
if(date>=214 && date<=244)  {date=num-213; month="August"   ;}
if(date>=245 && date<=274)  {date=num-244; month="September";}
if(date>=275 && date<=305)  {date=num-274; month="October"  ;}
if(date>=306 && date<=335)  {date=num-305; month="November" ;}
if(date>=336 && date<=366)  {date=num-335; month="December" ;}
//}
cout<<endl;
cout<<" Birthday:- "<<date<<" "<<month<<" "<<Byear<<endl;

}

void title(){
    cout<<"\t----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t#       _  _     _ _ _     _ _ _         _ _       _  _   _ _      _    _   _   _ _ _   _ _ _    _ _ _   #"<<endl;
    cout<<"\t#     /  |/ /  /_    _/   /  _ /        /   |    /  |/ / /   |    / /  / /_/ / / _ _/ /_    _/  / _ _/   #"<<endl;
    cout<<"\t#    / / | /     / /     / /           / /| |   / / | / / /| |   / /  /_   _/ /_  _     / /    /_  _     #"<<endl;
    cout<<"\t#   / /|  /   _ / /_    / /_ _        / /_| |  / /|  / / /_| |  / /_   / /   _ _/  / _ / /_   _ _/  /    #"<<endl;
    cout<<"\t#  /_/ |_/   /_ _ _ /  /_ _ _/       /_/  |_| /_/ |_/ /_/  |_| /_ _ / /_/   /_ _ _/ /_ _ _ / /_ _ _/     #"<<endl;
    cout<<"\t#                                                                                                        #"<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t                                              NIC ANALYSIS                                                "<<endl;
    cout<<"\t                             Copyright(c) 2021 P.D.B.D.Gunatilake all rights reserved                     "<<endl;
}
