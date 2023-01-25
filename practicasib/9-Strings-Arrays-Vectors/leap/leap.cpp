#include "leap.h"

namespace leap {
bool is_leap_year(const int año) {
  if (año % 4 == 0) { 
    if (año % 100 != 0) {
      return true;
    } else if ((año / 100) % 4 == 0) {
        return true;
      } else {
          return false;
        }
  } else {
      return false;
    } 
}
} // namespace leap
