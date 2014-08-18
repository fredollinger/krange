#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QtWidgets/QTabWidget>
#include <editorpage4.h>

/**
 * An extension to the standard KDE tab widget that allows the user to select
 * a tab from a list displayed as a popup menu.
 * @author Elad Lahav
 */
namespace krange{
class TabWidget : public QTabWidget
{
Q_OBJECT
public:
    TabWidget();
    ~TabWidget();
    void addEditorPage(EditorPage*);

#if 0
private:
	/** The list button. */
	QToolButton* m_pButton;
	
	/** A popup-menu containing all tab labels. */
	KSPopup * m_pMenu;
	
private slots:
	void slotShowTabList();
#endif
};
}// namespace kscope4

#endif
