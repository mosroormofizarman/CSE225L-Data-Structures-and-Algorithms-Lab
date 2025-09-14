#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <typename X>
class dynArr
{
    private:
        X *data;
        int size;
    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, X);
        X getValue(int);
};
#endif // DYNARR_H_INCLUDED
