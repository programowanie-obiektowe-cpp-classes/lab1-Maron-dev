class Wektor2D
{
private:
    double x;
    double y;
public:
    Wektor2D()
    {
        //cout << "Stworzylem wektor doyslny";
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