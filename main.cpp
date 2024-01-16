#include <iostream>  
using namespace std;  
   
int main()  
{  
    int i, x;  
    char str[100];  
   
    cout << "Please enter a string: ";  
    cin >> str;  
 
    cout << "Please choose following options:\n";  
    cout << "1 = Encrypt the string.\n";  
    cout << "2 = Decrypt the string.\n";  
    cin >> x;  
    
    // Using switch case statements  
    switch(x)  
    {  
        // First case for encrypting a string  
        case 1:  
            for(i = 0; (i < 100 && str[i] != '\0'); i++)  
                str[i] = str[i] + 2; 
    
            cout << "Encrypted string: " << str << endl;  
            break;  
    
    
        // Second case for decrypting a string  
        case 2:  
            for(i = 0; (i < 100 && str[i] != '\0'); i++)  
                str[i] = str[i] - 2; 
    
            cout << "Decrypted string: " << str << endl;  
            break;  
    
        default:  
            cout << "Invalid Input !!!\n";  
    }  
    
    return 0;  
}
