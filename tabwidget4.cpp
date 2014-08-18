#include "tabwidget4.h"
/*
#include <qtooltip.h>
#include <klocale.h>
// #include "kscopepixmaps.h"
#include "kspopup.h"
*/

/**
 * Class constructor.
 * @param	pParent	A pointer to the parent widget
 * @param	szName	Optional widget name
 */
namespace krange{
TabWidget::TabWidget() 
    : QTabWidget()
{
}

TabWidget::~TabWidget()
{
}

void TabWidget::addEditorPage(EditorPage *pNewPage) {
    int index;
    QString title="title";
    index = addTab(pNewPage, title);
    setCurrentIndex(index);
}

} // namespace krange
