#include <iostream>
using namespace std;


int main()
{
     

     
    char Pin = 'B';
    char Continue;  
    bool Start = true;
    char Input;

 
    
      



     
     for ( ;Start; )
     {


          std::cout << "Enter Your Password ( Note only one letter allowed ):: ";
          std::cin >> Input ;


        if ( ( Pin == Input )  )
         {
            std :: cout << "Correct Password You Are Sucessful Welcome to Can You See This Nuts \n";
            
         }
         else{
           std::cout << " incorrect Password Try Again\n";
            std::cout << "Do You Want to Try Again ...... Y|N\n";
         }
          


         
          std::cin >> Continue;


          switch (Continue)
          {
          case 'Y':
             Start = true;
            break;
            
          
          case 'N':
          Start = false;
            break;




            
          }






     }
     

        
        
       

      
       
      
        
    return 0;
}
