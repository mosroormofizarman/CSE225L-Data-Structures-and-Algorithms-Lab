#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template <class jakhushi>
class dynArr
{
private:
    jakhushi *data;
    int size;
public:
    dynArr(int);
    ~dynArr();
    void setValue(int, jakhushi);
    jakhushi getValue(int);
};

#endif // DYNARR_H_INCLUDED
