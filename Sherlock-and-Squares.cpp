int squares(int a, int b)
{
    int start = std::ceil(std::sqrt(a));
    int end = std::floor(std::sqrt(b));
    return (end - start + 1);
}
