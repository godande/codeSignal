int arrayChange(std::vector<int> inputArray) {
    int numberOfChanges = 0;
    for(int i = 1; i < inputArray.size(); i++) {
        if(inputArray[i] - inputArray[i-1]  < 1) {
            numberOfChanges += abs(inputArray[i] - inputArray[i-1]) + 1;
            inputArray[i] += abs(inputArray[i] - inputArray[i-1])+1;
        }
    }
    return numberOfChanges;
}

