#include <iostream>
#include <string>
using namespace std;

class TestCase {
       static int Failed=0;
       static int Passed=0;
       static int Current=0;
       string str=NULL;
       ostream cerr;
       TestCase(string& const s, ostream& cerr);
       template <typename T> TestCase& check_equal(T& a,T& b)
       {
              if(a==b){
                     Passed++;
                     Current++;
                return TestCase&;  
              }
               else {
                     Failed++;
                     Current++;
                     cerr<<str+": Failure in test #"+Current+": "+a+" should equal "+b+" !";
                return TestCase&;
              }
       }
       template <typename T> TestCase& check_different(T& a,T& b)
       {
              if(a!=b){
                     Passed++;
                     Current++;
                return TestCase&;  
              }
               else {
                     Failed++;
                     Current++;
                     cerr<<str+": Failure in test #"+Current+": "+a+" should not equal "+b+" !";
                return TestCase&;
              }
       }
       
       check_output();
       check_function;
};
