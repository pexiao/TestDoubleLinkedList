//
// Created by mfbut on 2/14/2019.
//

#ifndef LINKEDLIST_DOUBLELINKEDLISTTEST_H
#define LINKEDLIST_DOUBLELINKEDLISTTEST_H

#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "DoublyLinkedList/DoublyLinkedList.h"

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& vec) {
  for (const auto& val : vec) {
    out << val << " ";
  }
  return out;
}

template<typename T>
class DoubleLinkedListTest : public ::testing::Test {
 public:
  static std::vector<T> constructorArgs;
  static std::vector<T> pushArgs;
};

#endif //LINKEDLIST_DOUBLELINKEDLISTTEST_H
