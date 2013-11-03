
#include "gtest-extended.h"
#include "gtest/gtest-spi.h"

TEST(ExpectsTest, ExpectNullSuccessWhenPointerIsNull)
{
	EXPECT_NULL(NULL);
}

TEST(ExpectsTest, ExpectNullFailWhenPointerIsNotNull)
{
	EXPECT_FATAL_FAILURE(EXPECT_NULL("ABC"), "Expected: NULL");
}

TEST(ExpectsTest, ExpectNotNullSuccessWhenPointerIsNotNull)
{
	EXPECT_NOT_NULL("ABC");
}

TEST(ExpectsTest, ExpectNotNullFailWhenPointerIsNull)
{
	EXPECT_FATAL_FAILURE(EXPECT_NOT_NULL(NULL), "Expected: not NULL");
}
