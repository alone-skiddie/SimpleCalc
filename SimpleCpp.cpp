#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double  first_no,second_no;
    int  choice;
    double  no;
    double  result;

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
              break;
      
     
       	 case 2:	   
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no - second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" - "<<second_no <<" = "<<result<<endl;
              break;
              
             
            
       	 case 3:	   
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no *  second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" × "<<second_no <<" = "<<result<<endl;
              break;
              
              
       	 case 4:	   
       cout<<"   enter the first no: ";
       cin>>first_no;
       cout<<"   enter the second no: ";
       cin>>second_no;
       result=first_no / second_no;
       cout<<"\n";
       cout<< "        "<<" "<<first_no <<" ÷ "<<second_no <<" = "<<result<<endl;
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
              break;

         
         case 6:
       cout<<"   enter the first no: ";
       cin>>sqrt_first_no;
       cout<<"   enter the second no: ";
       cin>>sqrt_second_no;
       result=first_no *  second_no;
       cout<<"\n";
       cout<< "        "<<" "<<" √" <<sqrt_first_no<<" = "<< sqrt(sqrt_first_no)<<endl;
       cout<< "        "<<" "<<" √" <<sqrt_second_no<<" = "<< sqrt(sqrt_second_no)<<endl;
        
              break;



      
        default:
          cout<<"invalid selection!!!";
          break;

  }
      
      
	return 0;
}
