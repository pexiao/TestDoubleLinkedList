//
// Created by mfbut on 2/14/2019.
//

#include <sstream>
#include <string>
#include "DoubleLinkedListTest.h"

using TestTypes = ::testing::Types<int, std::string>;
TYPED_TEST_SUITE(DoubleLinkedListTest, TestTypes);

template<>
std::vector<int> DoubleLinkedListTest<int>::constructorArgs{1, 2, 3};

template<>
std::vector<std::string> DoubleLinkedListTest<std::string>::constructorArgs{"bob", "cat", "sally", "man"};

TYPED_TEST(DoubleLinkedListTest, VectorConstructor) {
  DoublyLinkedList<TypeParam> dll(TestFixture::constructorArgs);
  std::stringstream output;
  std::stringstream expectedOutput;
  output << dll;
  expectedOutput << TestFixture::constructorArgs;
  ASSERT_EQ(output.str(), expectedOutput.str());
}

template<>
std::vector<int> DoubleLinkedListTest<int>::pushArgs{64, 9, 27, 65};

template<>
std::vector<std::string> DoubleLinkedListTest<std::string>::pushArgs{"bob", "cat", "sally", "man"};

TYPED_TEST(DoubleLinkedListTest, PushFrontOnce) {
  DoublyLinkedList<TypeParam> dll;
  dll.push_front(TestFixture::pushArgs.at(0));
  ASSERT_EQ(dll.front(), TestFixture::pushArgs.front());
}

TYPED_TEST(DoubleLinkedListTest, HeadAndTailSameAfterPushFront) {
  DoublyLinkedList<TypeParam> dll;
  dll.push_front(TestFixture::pushArgs.at(0));
  ASSERT_EQ(dll.back(), TestFixture::pushArgs.front());
}
