#include"data.h"
/* helper function for finding upper bound recurssively*/
unsigned int Data::helper(std::list<unsigned int>::const_iterator curritr) {
    if (curritr != values.end()) {
        unsigned int currVal = *curritr;
        curritr++;
        return std::max<unsigned int>(currVal, helper(curritr));
    }
}
/*recursively finding upper_bound*/
unsigned int Data::upper_bound() {
    return helper(values.begin());
}
/* iteratively finding lower bound*/
unsigned int Data::lower_bound() {
    unsigned int minVal = INT_MAX;
    for (auto val : values)
        minVal = std::min<unsigned int>(val, minVal);
    return minVal;
}