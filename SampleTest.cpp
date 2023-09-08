#include <iostream>
#include "bigint_function_definitions.h"
using namespace std;


int main() {
    bigint a("56654250564056135415631554531554513813");     
    bigint b("60820564691661355463515465564664568");        
    bigint d(956486133);                                   
   


    bigint c = a + b;                         
    cout << c << std::endl;     

    c = a + 56242;                            
    cout << c << std::endl;     

    c = 52 + 98;                              
    cout << c << std::endl;    

    c = c + a + b;                            
    cout << c << std::endl;     
    


    c = a - b;                                 
    cout << c << std::endl;     

    c = a - 56242;                            
    cout << c << std::endl;     

    c = 52 - 98;                              
    cout << c << std::endl;     

    c = c - a - b;                            
    cout << c << std::endl;     

   

    c = a * b;                                
    cout << c << std::endl;     

    c = a * 56242;                           
    cout << c << std::endl;     

    c = 52 * 98;                             
    cout << c << std::endl;     

    c = c * a * b;                           
    cout << c << std::endl;     

  

    c = a / b;                                 
    cout << c << std::endl;   

    c = a / 56242;                            
    cout << c << std::endl;    

    c = 98 / 56;                              
    cout << c << std::endl;    

    c = a / b / c;                            
    cout << c << std::endl;     

   

    c = a % b;                                
    cout << c << std::endl;     

    c = a % 56242;                          
    cout << c << std::endl;    

    c = 98 % 56;                              
    cout << c << std::endl;       

    c = a % b % c;                           
    cout << c << std::endl;     

    

    if(a > b) {
        cout << "a is greater than b" << std::endl;     
    } else 
    {
        cout << "a is smaller than b" << std::endl;     
    }

    if(a != b) {
        cout << "a is not equal to b" << std::endl;     
    } else {
        cout << "a is equal to b" << std::endl;         
    }
    

   


    // Absolute function

    cout << big_abs(b) << std::endl;    
    b = to_bigint("-60820564691661355463515465564664568");
    cout << big_abs(b) << std::endl;       
    b = big_abs(b);
    cout << b << std::endl;             


    // Maximum fuction

    cout << big_max(a, b) << std::endl;          
    


    // Minumum function

    cout << big_min(a, b) << std::endl;         
   


    // Power function

    b = to_bigint("2");
    cout << big_pow(a, b) << std::endl;            
    
    b = to_bigint("60820564691661355463515465564664568");


    // Square root function

    cout << big_sqrt(a) << std::endl;              
   


    

    // Swapping two bigints

    big_swap(a, b);
    cout << a << "\t" << b << std::endl;    

    // Greatest Common Divisor (GCD) or Highest Common factor(HCF) function

    cout << big_gcd(a, b) << std::endl;     


    // Lowest Common Multiple (LCM)

    cout << big_lcm(a, b) << std::endl;     


    // Factorial Function

    a = to_bigint("15");
    cout << big_fact(a) << std::endl;      


    // isPrime Function

    a = to_bigint("67");
    b = to_bigint("33");
    cout << big_isPrime(a) << std::endl;      
    cout << big_isPrime(b) << std::endl;      


    // Reverse function, which reverses the Number

    a = to_bigint("65894");
    cout << big_reverse(a) << std::endl;           


    // isPalindrome Function

    cout << big_isPalindrome(a) << std::endl;        
    a = to_bigint("654456");
    cout << big_isPalindrome(a) << std::endl;       


    // Increment and Decrement
    
    cout << a << "\t" << ++a << std::endl;             
    cout << a << "\t" << --a << std::endl;             

    return 0;
}
