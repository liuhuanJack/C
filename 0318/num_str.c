char* num_str(int num)
{
    char *src;
    while(num != 0)
    {
        src = num %10 + '0';
	num = num /10;
    }
    return src;
}
