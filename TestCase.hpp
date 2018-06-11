#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class TestCase {
     private:
       int Failed,Passed,Current;
       string str;
       
      
     public:  
       ostream cerr;
       TestCase(string s, ostream& cerr);
       template <typename T> TestCase& check_equal(T a,T b)
       {
              if(a==b){
                     Passed++;
                     Current++;
              }
               else {
                     Failed++;
                     Current++;
                     cerr<<str+": Failure in test #"<<Current<<": "<<a<<" should equal "<<b<<" !"<<endl;
              }
              return *this;
       }
       template <typename T> TestCase& check_different(T a,T b)
       {
              if(a!=b){
                     Passed++;
                     Current++;
              }
               else {
                     Failed++;
                     Current++;
                     cerr<<str+": Failure in test #"<<Current<<": "<<a<<" should not equal "<<b<<" !"<<endl;
               }
              return *this;
       }
       
      template <typename T> TestCase& check_output(T a,string b){
          stringstream ss;
          ss << a;
          string str2 = ss.str();
          if(str2==b){
              Passed++;
              Current++;
          }
          else{
              Failed++;
              Current++;
              cerr<<str+": Failure in test # "<<Current<<":string value should be "<<a<<"but is "<<b<<"!"<<endl;
          }
          return *this;
      }
      template <typename T,typename T2,typename func> TestCase& check_function(func f,T a,T2 b){
        int c=f(a);
        if(c==b){
            Current++;
            Passed++;
        }
        else{
            Current++;
            Failed++;
            cerr<<str+": Failure in test # "<<Current<<":Function should return "<<b<<" but returned "<<c<<"!"<<endl;
        }
        return *this;
      }
    void print();
};    
