/**
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * $Id$
 * <p>Title: WUReset Project.</p>
 * <p>Description: Reset Windows Update Tool.</p>
 * <p>Copyright: Microsoft Public License (MS-PL).</p>
 * <p>Company: <a href="https://wureset.com/">Manuel Gil</a></p>
 *
 * Problem: Reset the Windows Update Components.
 * @author $Author: Manuel Gil. $
 * @version $Revision: 11.0.0.9 $ $Date: 06/11/2020 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _Menu_
#define _Menu_

#include <vector>

#include "item.h"

/**
 * Create a generic menu.
 */
class Menu
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    vector<Item *> items;

public:
    /**
		 * Get an option by index.
		 */
    Item *getItem(int index)
    {
        return items[index];
    }

    /**
		 * Add a new option.
		 */
    void addItem(Item *pItem)
    {
        items.push_back(pItem);
    }

    /**
		 * Get size of the menu.
		 */
    int getSize()
    {
        return items.size();
    }
};

#endif
