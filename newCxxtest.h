//
// CopyRight 2024
//

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    // test all functions
    void testFoodItem() {
        //TS_ASSERT_EQUALS(1, 1);
        //TS_ASSERT_DELTA(1.0, 1.1, 0.2);
        //TS_ASSERT_THROWS(functionCall(), std::exception);
        //TS_ASSERT_THROWS_EQUALS(functionCall(), std::exception, "what the exception should say");
    }
};

#endif //NEWCXXTEST_H
