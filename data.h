#include<list>
class Data {
    std::list<unsigned int> values;
public:
    Data(std::list<unsigned int> list) {
        for (auto val : list)
            values.push_back(val);
    }
    unsigned int upper_bound();
    unsigned int lower_bound();
    unsigned int helper(std::list<unsigned int>::const_iterator curritr);
};

