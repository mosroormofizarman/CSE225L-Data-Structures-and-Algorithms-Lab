#ifndef DYNARR2_H_INCLUDED
#define DYNARR2_H_INCLUDED

class dynArr2
{
    private:
        int **data;
        int row;
        int col;
    public:
        dynArr2();
        dynArr2(int, int);
        ~dynArr2();
        void setValue(int, int, int);
        int getValue(int, int);
};



#endif // DYNARR2_H_INCLUDED
