#ifndef Grid_H
#define Grid_H

#include <vector>
using std::vector;

#include "cell.h"
#include "displayable.h"


class Grid:public Displayable
{
    public:
        bool is_accessible(int x, int y);
        bool loadMap(const char* pMapname);
        int mWidth;
        int mHeight;
        vector<CellElem*> getCellElems(int x, int y);
    private:
        vector<vector<Cell*> > mCells;
};

#endif
