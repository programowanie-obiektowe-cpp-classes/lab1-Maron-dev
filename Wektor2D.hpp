class Wektor2D
{
private:
    double x;
    double y;
public:
    Wektor2D()
    {
    
        x = 0;
        y = 0;
    }
    Wektor2D(double p_x, double p_y)
    {
        //cout << "Stworzylem wektor niedomyslny";
        x = p_x;
        y = p_y;
    }
    void setX(double new_x)
    {
        x = new_x;
    }
    void setY(double new_y)
    {
        y = new_y;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    double result;
    result = (w1.getX() * w2.getX()) + (w1.getY() * w2.getY());
    return result;
}
