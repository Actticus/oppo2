double my_pow(double x, unsigned int y){
    double count = 1;
    if (y == 0) 
        return 1;
    while (y)
        if (y % 2 != 0)
        {
            count*=x;
            y--;
        }
        else
        {
            y /= 2;
            x *= x;
        }
    return count;
}

int main(){

}