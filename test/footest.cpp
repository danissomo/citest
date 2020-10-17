#include "gtest/gtest.h"
#include "foofunc.h"
TEST(footest, ok){
    ASSERT_EQ(foofunc(5), 5);
}

