#if 0
#include <kdeversion.h>

#include <qfileinfo.h>
#include <QHBoxLayout>

#include <KTextEditor/MarkInterface>
#include "filelistlocation.h"
#include "kscopeconfig4.h"
#include <KTextEditor/View>
#endif
#include "editorpage4.h"

namespace krange{
EditorPage::EditorPage(QTabWidget* pParent, const char* szName)
	: QGroupBox(pParent)
	, m_pParentTab(pParent)
	, m_pDoc()
{
}
// END DEPRECATED

EditorPage::~EditorPage()
{
}

} // namespace kscope4
// Sun Mar 18 11:43:51 PDT 2012
