int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int check[A.size()];
    for(size_t i=0 ; i<A.size() ; ++i) check[i] = 0;

    for(size_t i = 0 ; i<A.size() ; ++i)
        if((unsigned int)A[i] <= A.size()) check[A[i]-1] += 1;

    for(size_t i = 0 ; i<A.size() ; ++i)
        if(check[i] == 0) return 0;
    return 1;       
}
