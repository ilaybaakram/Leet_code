int findComplement(int num){
    if(num == 0) return 1;

    int complement = 0;
    unsigned int bit = 1;

    while(num > 0){
        if((num & 1) == 0)   
            complement |= bit;  
        num >>= 1;            
        bit <<= 1;               
    }

    return complement;
}