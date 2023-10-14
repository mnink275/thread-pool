#pragma once

#include <cstddef>

namespace ink {

template <class T>
class KThreadPool {
 public:
  KThreadPool(std::size_t capacity) : capacity_(capacity) {}

  std::size_t GetCapacity() { return capacity_; }

 private:
  std::size_t capacity_;
};

}  // namespace ink