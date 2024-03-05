#include <gtest/gtest.h>
#include "arrayStack.cc"

//cmake -G "MinGW Makefiles" -S . -B build
//cmake --build build
// Demonstrate some basic assertions.
ArrayStack<int> s = ArrayStack<int>(5);
TEST(POP, AXIOMS) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "world");
  // Expect equality.

  //1. pop(newstack)   = newstack
  s.pop();
  EXPECT_EQ(s.empty(), true);

  //2. pop(push(S,I))  = S
  s.push(1);
  s.pop();
  EXPECT_EQ(s.empty(), true);
} 
TEST(TOP, AXIOMS) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "world");
  // Expect equality.

  //3. top(newstack)   = undefined
  //int top = s.top();
  //EXPECT_EQ(top, 0);

  //4. top(push(S,I))  = I
  s.push(1);
  top = s.top();
  EXPECT_EQ(top, 1);
} 
TEST(EMPTY, AXIOMS) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "world");
  // Expect equality.

  //3. top(newstack)   = undefined
  s.pop();
  EXPECT_EQ(s.empty(), true);

  //4. top(push(S,I))  = I
  s.push(1);
  EXPECT_EQ(s.empty(), false);
} 