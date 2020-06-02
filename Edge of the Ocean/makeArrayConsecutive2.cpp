int makeArrayConsecutive2(std::vector<int> statues) {
    int maximum = -INFINITY; int minimum = INFINITY;
    for(const auto& statue : statues) {
        if(statue > maximum) {
            maximum = statue;
        }
        if(statue < minimum) {
            minimum = statue;
        }
    }
    return (maximum-minimum)-statues.size()+1;
}

