#include "TestCase.hpp"
TestCase::TestCase( string s, ostream& cerr): cerr(cerr.rdbuf()){
    Failed=0,Passed=0,Current=0;
    str=s;

    
}

void TestCase::print(){
    cerr << str + ": " +to_string(Failed)+" failed, " +to_string(Passed)+ " passed, "+to_string(Current)+ " total." << endl;
    cerr << "---" << endl;
}