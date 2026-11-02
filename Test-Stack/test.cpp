#include "pch.h"

#include "..\mp2-lab3-stack\stack.h"

TEST(TStack, can_create) {
  ASSERT_NO_THROW(TStack<int> st(3));
}

TEST(TStack, cannot_create) {
  ASSERT_ANY_THROW(TStack<int> st(-3));
}