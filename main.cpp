double my_pow(double x, unsigned int y){
    if (y == 0)
        return 1;
    for (int i = 1; i < y; i++)
    {
        x *= 2;
    }
    return x;
}

int main(){

}