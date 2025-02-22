/*
 * Xournal++
 *
 * A list with parts
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <string>
#include <vector>

#include <gtk/gtk.h>


class ErasableStrokePart;

class PartList {
public:
    PartList();
    virtual ~PartList();

private:
    PartList(const PartList& list);
    void operator=(const PartList& list);

public:
    void add(ErasableStrokePart* part);
    PartList* clone();

private:
    GList* data = nullptr;

    friend class ErasableStroke;
};
