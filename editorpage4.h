#ifndef EDITORPAGE_H
#define EDITORPAGE_H

//#include <QHBoxLayout>
#include <QGroupBox>
#include <QTextEdit>
#include <QTabWidget>

namespace krange{
class EditorPage : public QGroupBox
{
   Q_OBJECT

public:
	EditorPage(QTabWidget* pParent = 0, const char* szName = 0);
	~EditorPage();
	
signals:
	/**
	 * Emitted when a file has been fully loaded into the editor.
	 * @param	pPage	The emitting object
	 * @param	sPath	The full path of the loaded file
	 */
	void fileOpened(EditorPage* pPage, const QString& sPath);
	
	/**
	 * Emitted when an editor is opened for editing a new file.
	 * @param	pPage	The emitting object
	 */
	void newFile(EditorPage* pPage);

	/**
	 * Emitted when the 'modified' status of the editor changes.
	 * This happens when the contents of the editor change, or when the file
	 * being edited is saved.
	 * @param	pPage		The emitting object
	 * @param	bModified	true if the new state is 'modified', false if the
	 *						new state is 'unmodified'
	 */
	void modified(EditorPage* pPage, bool bModified);
	
	/**
	 * Emitted when the position of the cursor changes.
	 * @param	nLine	The new line number
	 * @param	nCol	The new column number
	 */
	void cursorPosChanged(uint nLine, uint nCol);
	
	/**
	 * Emitted when a file is saved after it was modified.
	 * Indicates the project's cross-reference database needs to be updated.
	 * @param	sPath	The full path of the saved file
	 * @param	bIsNew	true if this is a new file, false otherwise
	 */
	void fileSaved(const QString& sPath, bool bIsNew);
	
	/**
	 * Emitted when a file is closed.
	 * @param	sPath	The full path of the closed file
	 */
	void fileClosed(const QString& sPath);

private:
	/** The tab widget holding this page. */
	QTabWidget* m_pParentTab;
	
	/** The document part of the editor. */
	QTextEdit* m_pDoc;

};
} // namespace kscope4
#endif
// Sun Aug 17 14:50:37 PDT 2014
