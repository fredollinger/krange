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
EditorPage::EditorPage(QTextEdit* pDoc, QTabWidget* pParent, const char* szName)
	: QHBoxLayout(pParent)
	, m_pParentTab(pParent)
	, m_pDoc(pDoc)
{
}
// END DEPRECATED

EditorPage::~EditorPage()
{
}

} // namespace kscope4
// Sun Mar 18 11:43:51 PDT 2012
