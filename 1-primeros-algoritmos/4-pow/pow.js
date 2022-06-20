
function pow(base, exp){
    if(exp === 0)
        return 1;
    
    return base * pow(base, exp - 1);
}