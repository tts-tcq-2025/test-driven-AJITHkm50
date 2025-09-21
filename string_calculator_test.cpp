#include <gtest/gtest.h>
#include "string_calculator.h"

TEST(StringCalculatorTest, ReturnsZeroOnEmptyString) {
    StringCalculator calc;
    EXPECT_EQ(calc.Add(""), 0);
}
