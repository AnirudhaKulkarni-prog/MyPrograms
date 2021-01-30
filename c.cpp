#include<iostream> 
using namespace std; 
  
class Test { 
    int value; 
public: 
    Test(int v); 
}; 
  
Test::Test(int v) { 
    value = v; 
    cout<<v;
} 
  
int main() { 
    Test t(); 
    return 0; 
} 
