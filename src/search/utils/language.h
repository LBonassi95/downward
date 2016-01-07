#ifndef UTILS_LANGUAGE_H
#define UTILS_LANGUAGE_H

#if defined(_MSC_VER)
#define NO_RETURN __declspec(noreturn)
#else
#define NO_RETURN __attribute__((noreturn))
#endif

/* The Visual Studio 2013 compiler does not support noexcept.
   http://stackoverflow.com/questions/18387640 */
#if defined(_MSC_FULL_VER) && _MSC_FULL_VER < 180021114
#define NOEXCEPT
#else
#define NOEXCEPT noexcept
#endif

namespace Utils {
template<typename T>
void unused_parameter(const T &) {
}
}

#endif
