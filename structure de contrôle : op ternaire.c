int max3(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}


// En opérateurs ternaires : 
max3 = (a>=b && a>=c) ? a : (b>=c);
max3 = (b>=c) ? b : c;

