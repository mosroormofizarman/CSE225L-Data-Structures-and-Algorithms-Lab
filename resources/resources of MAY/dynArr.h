#ifndef DYNARR_H
#define DYNARR_H

template<class item>
class dynArr
{
    //item;
    public:
        dynArr();
        dynArr(int);
        void setValue(int, item);
        item getValue(int);

    private:
        item *data;
        int size;

};

#endif // DYNARR_H
