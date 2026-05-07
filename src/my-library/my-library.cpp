#include "my-library/my-library.hpp"
#include "vex.h"

namespace mylib {

void hello() {
    Brain.Screen.print("Hello from my-library!");
}

} // namespace mylib
