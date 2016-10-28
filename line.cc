#include "metro.h"

using namespace std;

Line*
find_line(Lines& lines, const string& name) {
    // TODO: искать линию под названием `name` в списке `lines`/
 Line* curtline = lines.first;
	while(curtline != nullptr)
    {
		if (curtline -> name == name)
                return curtline;
		curtline = curtline -> next;
	}
    return nullptr;
}

Line*
add_line(Lines& lines, const string& name) {
    // TODO: добавить линию под названием `name` в конец списка `lines`.
        Line* line_add_end = new Line;
        line_add_end -> name = name;
        line_add_end -> next = nullptr;
    if (lines.last == nullptr)
        { lines.first=line_add_end; }
        else
    {
        lines.last -> next = line_add_end;
        lines.last = line_add_end;
        }

            return nullptr;
}

Line*
get_line(Lines& lines, const string& name) {
    // TODO: найти линию под названием `name` в `lines` или создать и добавить её в конец.
        Line* line_create = find_line(lines, name);
    if (line_create == nullptr)
    {
       return add_line(lines, name);


    }
    else
    {

       return line_create;

    }

    return nullptr;
}
