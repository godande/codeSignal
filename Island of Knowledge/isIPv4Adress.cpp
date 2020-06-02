bool isIPv4Address(std::string s) {
    s = s + '.';
    vector<string> subS;
    int start=0, end=0;
    for( int i = 0; i < s.size(); ++i){
        if (s.at(i) == '.'){
            end = i-1;
            if (end<start)
                return false;
            string tempSubS = s.substr(start, end-start+1);
            if(tempSubS[0] == '0' && tempSubS.size()>1){
                return false;
            }
            subS.push_back(tempSubS);
            start = i+1;
        }
        else if( !isNumber(s.at(i)) )
            return false;
    }
    if (subS.size() != 4)
        return false;
    for( int j = 0; j < subS.size(); ++j){
        string numString = subS[j];
        if ( numString.size() > 3 )
            return false;
        int num = stoi(numString);
        if ( num < 0 || num > 255 )
            return false;
    }

    return true;
}

bool isNumber(char c){
    int charInt = c;
    if (charInt < 48 || charInt > 57 )
        return false;
    return true;
}
