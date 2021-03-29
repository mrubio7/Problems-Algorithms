bool isNumber(char *s)
{
    int x = 0;
    int e = 0;
    int n = 0;
    int d = 0;
    
    if (s[0] == '+' || s[0] == '-')
        x++;
    if (s[0] == 'e')
        return (false);
    if (s[0] == '.' && s[1] == '\0')
        return (false);
    while (s[x] != '\0')
    {
        if (s[x] >= '0' && s[x] <= '9')
        {
            n = 1;
            x++;
        }
        else if ((s[x] == 'e' || s[x] == 'E') && s[x+1] != '\0' && n == 1 && e == 0)
        {
            e = 1;
            x++;
            if ((s[x] == '+' || s[x] == '-') && s[x+1] != '\0' && n == 1)
                x++;
        }
        else if (s[x] == '.' && e == 0 && d == 0)
        {
            d = 1;
            x++;
            if (s[x] == '\0' && n == 0)
                return (false);
        }
        else
            return (false);
    }
    return (true);
}
