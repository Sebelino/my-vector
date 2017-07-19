#pragma once

#include <iostream>

/**
 * @brief Homebrewn implementation of a vector.
 */
class Vector {
 public:
  Vector() : m_length(0) {
    m_buffer = new long[m_length];  // FIXME: Look up member initialization
  }

  /**
   * @brief Initializes a Vector of num elements where each element equals element.
   * @param num
   * @param element
   */
  Vector(const std::size_t num, const long element) : m_length(num) {
    m_buffer = new long[m_length];
    std::fill(m_buffer, m_buffer + num, element);
  }

  friend std::ostream& operator<<(std::ostream& stream, const Vector& v) {
    stream << "[";
    if (v.m_length >= 1) {
      stream << v.m_buffer[0];
    }
    for (std::size_t i = 1; i < v.m_length; ++i) {
      stream << ", " << v.m_buffer[i];
    }
    stream << "]";
    return stream;
  }

 private:
  long* m_buffer;
  std::size_t m_length;
};
