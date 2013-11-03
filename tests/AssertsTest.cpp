
#include "gtest-extended.h"
#include "gtest/gtest-spi.h"

TEST(AssertsTest, AssertNullSuccessWhenPointerIsNull)
{
	ASSERT_NULL(NULL);
}

TEST(AssertsTest, AssertNullFailWhenPointerIsNotNull)
{
	EXPECT_FATAL_FAILURE(ASSERT_NULL("ABC"), "Expected: NULL");
}

TEST(AssertsTest, AssertNotNullSuccessWhenPointerIsNotNull)
{
	ASSERT_NOT_NULL("ABC");
}

TEST(AssertsTest, AssertNotNullFailWhenPointerIsNull)
{
	EXPECT_FATAL_FAILURE(ASSERT_NOT_NULL(NULL), "Expected: not NULL");
}

