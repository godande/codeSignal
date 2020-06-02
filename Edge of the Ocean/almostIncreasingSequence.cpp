bool almostIncreasingSequence(std::vector<int> sequence) {
    vector<int> sequenceCP = sequence;
    if(sequence[1] - sequence[0] <= 0){
        sequence.erase(sequence.begin());

    }
    else {
        for(int i = 1; i < sequence.size(); i++) {
            if(sequence[i] - sequence[i-1] <= 0) {
                sequence.erase(sequence.begin()+i-1);
                sequenceCP.erase(sequenceCP.begin()+i);
                break;
            }
        }
    }
    cout << "owo\n";
    bool fs = false,sc = false;
    for(int i = 1; i < sequence.size(); i++) {
        if(sequence[i] - sequence[i-1] <= 0) {
            fs = true;
        }
        if (sequenceCP[i] - sequenceCP[i-1] <= 0) {
            sc = true;
        }
    }

    return !(fs&&sc);
}

