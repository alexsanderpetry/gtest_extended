
#ifndef GTEST_EXTENDED_H_
#define GTEST_EXTENDED_H_


#include "gtest/gtest.h"


#define ERR_MSG(actual, expected) "  Error: Value of: " << #actual << "\n" \
			                   << "    Actual: " << actual << "\n" \
			                   << "    Expected: " << expected;


#define EXPECT_NULL(pointer) \
	if(pointer != NULL) FAIL() << ERR_MSG(pointer, "NULL")

#define EXPECT_NOT_NULL(pointer) \
	if(pointer == NULL) FAIL() << ERR_MSG(pointer, "not NULL")


#define ASSERT_NOT_NULL(pointer) \
	if(pointer == NULL) FAIL() << ERR_MSG(pointer, "not NULL")

#define ASSERT_NULL(pointer) \
	if(pointer != NULL) FAIL() << ERR_MSG(pointer, "NULL")


#endif /* GTEST_EXTENDED_H_ */
