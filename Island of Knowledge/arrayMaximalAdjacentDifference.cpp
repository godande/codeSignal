int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int maxDifference = INT_MIN;
    for(int i = 1; i < inputArray.size(); i++) {
        maxDifference=max(maxDifference,abs(inputArray[i]-inputArray[i-1]));
    }
    return maxDifference;
}

