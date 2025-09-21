#include <gtest/gtest.h>
#include "test-driven-AJITHkm50/string_calculator.h"

TEST(StringCalculatorTest, ReturnsZeroOnEmptyString) {
    StringCalculator calc;
    EXPECT_EQ(calc.Add(""), 0);
}
