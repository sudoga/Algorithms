vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int sumAlice = 0;    
    int sumBob = 0;
    int lenghtA = a.size();
    int i = 0;
    while(i<lenghtA) {
        if(a.at(i) > b.at(i)) sumAlice++;
        if(b.at(i) > a.at(i)) sumBob ++;
        i++;
    }
    vector<int> SumArray = {sumAlice, sumBob};
    return SumArray;
}
