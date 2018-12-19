/*
*
* Let's me introduce my own implementation
* of the shared_ptr<T> smart pointer.
* This pointer performs counts references
* and delete. The work is not finished yet.
*
*/

#include <iostream>
#include <cstddef>
#include <string>
#include "smart_ptr.h"

int main()
{
    using std::cout;
    using std::endl;
    using std::string;
    
    cout << "Hello, World!!!" << endl;
    
    smart_ptr<string> s1(new string("Smart string"));
    smart_ptr<string> s2;
    
    s2 = s1;
    
    {
        smart_ptr<string> s3;
        
        s3 = s2;
        //here destructor of s3 will be invoked
    }
    
    cout << "string: " << *s2 << endl;
    cout << "string->size(): " << s2->size() << endl;
    
    return 0;
}
