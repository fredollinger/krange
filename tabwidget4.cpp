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
#if 0
	// Create a popup menu
	//m_pMenu = new KSPopup(this);
	
	// Set the current tab based on the menu selection
	//connect(m_pMenu, SIGNAL(activated(int)), this, SLOT(setCurrentPage(int)));
	
	// Create a button at the top-right corner of the tab widget
	m_pButton = new QToolButton(this);
	// m_pButton->setIconSet(Pixmaps().getPixmap(KScopePixmaps::TabList));
	// QToolTip::add(m_pButton, i18n("Shows a list of all open tabs"));
	m_pButton->adjustSize();
	setCornerWidget(m_pButton, Qt::TopRightCorner);
	
	// Show the popup-menu when the button is clicked
	connect(m_pButton, SIGNAL(clicked()), this, SLOT(slotShowTabList()));
#endif
}

/**
 * Class destructor.
 */
TabWidget::~TabWidget()
{
}

} // namespace kscope4
