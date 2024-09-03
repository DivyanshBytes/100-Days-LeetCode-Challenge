class DataStream {
public:
    int count = 0;
    int k, value;
    DataStream(int value, int k) {
        this->value = value;
        this->k = k; 
    }
    bool consec(int num) {
        if(value == num)
            count++;
        else   
            count = 0;
        if(count >= k)
            return true;
        else 
            return false;
    }
};
