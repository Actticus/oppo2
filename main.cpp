double my_pow(double x, int y){
    if (y == 0)
        return 1;
    if (y > 0)
        for (int i = 1; i < y; i++)
        {
            x *= 2;
        }
    if (y < 0){
        for (int i = y; i < -1; i++)
            {
                x *= 2;
            }
        x = 1 / x;
    }
    return x;
}

int main(){

}