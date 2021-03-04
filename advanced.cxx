#include<iostream>
#include<cmath>
using namespace std;





int main()
{
	
	double  first_no,second_no;
    int  choice;
    double  no;
    double  result;
    int sqrt_first_no,sqrt_second_no;
    string def_choice ="yes";
    string user_choice;
    int limit;
    int i;
    double  user_no;
    double temp_no;

cout<<"-----------------------CALCULATOR------------------------";
     cout<<"\n\n";
      cout<<"                select the operations:-\n ";
     cout<<"\n";

 cout<<"    1 >> addition: \n    2 >> substraction \n    3 >> multiplication: \n    4 >> division\n    5 >> sin/cos/tan \n    6 >> square root: \n  " <<endl <<"   enter your choice: ";

       cin>>choice;
       cout<<"\n";

       switch (choice){

         case 1:
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no + second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" + "<<second_no <<" = "<<result<<endl;
       cout<<"\n";
      cout<<"   Do you want to continue by calculating above result: ";
       cin>>user_choice;
       
       if (def_choice==user_choice){
              cout<<"\n";
              cout<<"   ok then enter the limit times to be calculated: ";
               cin>>limit;
               
              for (i =0; i<limit ; ++i){
                 cout<<"\n";
                 cout<<"    enter your no: to be added:  ";
                 cin>>user_no;
                 temp_no = result;
                 result=result+user_no;
                 cout<<"\n";
                 cout<< "        "<<" "<<temp_no <<" + "<< user_no<<" = "<<result<<endl;
                 cout<<"\n";
                 
              }
               
       }
       
       else {
              cout<<"\n";
              cout<<"    program is exited...";
       }
              break;


         case 2:
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no - second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" - "<<second_no <<" = "<<result<<endl;
       
           cout<<"\n";
      cout<<"   Do you want to continue by calculating above result: ";
       cin>>user_choice;
       
       if (def_choice==user_choice){
              cout<<"\n";
              cout<<"   ok then enter the limit times to be calculated: ";
               cin>>limit;
               
              for (i =0; i<limit ; ++i){
                 cout<<"\n";
                 cout<<"    enter your no: to be subtracted:  ";
                 cin>>user_no;
                 temp_no = result;
                 result=result-user_no;
                 cout<<"\n";
                 cout<< "        "<<" "<<temp_no <<" - "<< user_no<<" = "<<result<<endl;
                 cout<<"\n";
                 
              }
               
       }
       
       else {
              cout<<"\n";
              cout<<"    program is exited...";
       }
              break;



         case 3:
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no *  second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" × "<<second_no <<" = "<<result<<endl;
       
           cout<<"\n";
      cout<<"   Do you want to continue by calculating above result: ";
       cin>>user_choice;
       
       if (def_choice==user_choice){
              cout<<"\n";
              cout<<"   ok then enter the limit times to be calculated: ";
               cin>>limit;
               
              for (i =0; i<limit ; ++i){
                 cout<<"\n";
                 cout<<"    enter your no: to be multiplied:  ";
                 cin>>user_no;
                 temp_no = result;
                 result=result*user_no;
                 cout<<"\n";
                 cout<< "        "<<" "<<temp_no <<" × "<< user_no<<" = "<<result<<endl;
                 cout<<"\n";
                 
              }
               
       }
       
       else {
              cout<<"\n";
              cout<<"    program is exited...";
       }
              break;


         case 4:
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no / second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" ÷ "<<second_no <<" = "<<result<<endl;
       
           cout<<"\n";
      cout<<"   Do you want to continue by calculating above result: ";
       cin>>user_choice;
       
       if (def_choice==user_choice){
              cout<<"\n";
              cout<<"   ok then enter the limit times to be calculated: ";
               cin>>limit;
               
              for (i =0; i<limit ; ++i){
                 cout<<"\n";
                 cout<<"    enter your no: to be divided:  ";
                 cin>>user_no;
                 temp_no = result;
                 result=result/user_no;
                 cout<<"\n";
                 cout<< "        "<<" "<<temp_no <<" ÷"<< user_no<<" = "<<result<<endl;
                 cout<<"\n";
                 
              }
               
       }
       
       else {
              cout<<"\n";
              cout<<"    program is exited...";
       }
        break;


         case 5:
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       cout<<"\n";
       cout<< "    "<<" "<<" sin "<<first_no<<" = "<<sin(first_no)<<endl;
       cout<< "    "<<" "<<" cos "<<first_no<<" = "<<cos(first_no)<<endl;
       cout<< "    "<<" "<<" tan "<<first_no<<" = "<<tan(first_no)<<endl;

       cout<<"\n";

       cout<< "    "<<" "<<" sin "<<second_no<<" = "<<sin(second_no)<<endl;
       cout<< "    "<<" "<<" cos "<<second_no<<" =  "<<cos(second_no)<<endl;
       cout<< "    "<<" "<<" tan "<<second_no<<" = "<<tan(second_no)<<endl;
       
           cout<<"\n";
    
         case 6:
       cout<<"   enter the first no: ";
       cin>>sqrt_first_no;
       cout<<"   enter the second no: ";
       cin>>sqrt_second_no;
       result=first_no *  second_no;
       cout<<"\n";
       cout<< "        "<<" "<<" √" <<sqrt_first_no<<" = "<< sqrt(sqrt_first_no)<<endl;
        cout<< "        "<<" "<<" √" <<sqrt_second_no<<" = "<< sqrt(sqrt_second_no)<<endl;
        
            cout<<"\n";
        
              break;






       }
	
	
	
	return 0;
}