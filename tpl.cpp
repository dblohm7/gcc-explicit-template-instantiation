#include "tpl.h"

template class base<foo>;

template<class derived>
void base<derived>::bam()
{
}

