#include "TestCase.hpp"
TestCase::TestCase( string s, ostream& cerr): cerr(cerr.rdbuf()){//constructor
    Failed=0,Passed=0,Current=0;
    str=s;

    
}

void TestCase::print(){// func to print result of failed , passedn and total.
    cerr << str + ": " +to_string(Failed)+" failed, " +to_string(Passed)+ " passed, "+to_string(Current)+ " total." << endl;
    cerr << "---" << endl;
}
