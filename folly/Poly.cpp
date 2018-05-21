/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if defined(__GNUC__) && !defined(__clang__) && __GNUC__ < 5
#pragma message "Folly.Poly requires gcc-5 or greater"
#else

#include <folly/Poly.h>

namespace folly {
namespace detail {
[[noreturn]] void throwBadPolyAccess() { throw BadPolyAccess(); }
[[noreturn]] void throwBadPolyCast() { throw BadPolyCast(); }
} // namespace detail
} // namespace folly

#endif
