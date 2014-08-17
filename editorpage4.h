#ifndef EDITORPAGE_H
#define EDITORPAGE_H

#include <QHBoxLayout>
#include <QTextEdit>
#include <QTabWidget>
#if 0
#include <qwidget.h>
#include <qsplitter.h>
#include <ktabwidget.h>
#include <ktexteditor/view.h>
// #include <ktexteditor/markinterfaceextension.h>
// #include "ctagsfrontend.h"
//#include "ctagslist.h"
#include "filelistlocation.h"
#include "kscopeconfig4.h"
#include "kspopup.h"
#include "symbolcompletion4.h"
#include "projectbase4.h"
#endif

namespace krange{
class EditorPage : public QHBoxLayout
{
   Q_OBJECT

public:
	EditorPage(QTextEdit*, QTabWidget* pParent = 0, const char* szName = 0);
	//EditorPage(QTextEdit* pDoc, QTabWidget* pParent, const char* szName)

	//EditorPage(QTextEdit* pDoc, KSPopup* pMenu, QTabWidget* pParent, const char* szName = 0);
	~EditorPage();

#if 0
	void open(const QString&);
	void setNewFile();
	void save();
	bool close(bool bForce = false);
	void applyPrefs();
	void setEditorFocus();
	void setTagListFocus();
	void addBookmark(uint);
	void getBookmarks(kscope4::FileListLocation&);
	
	KTextEditor::Document* getDocument();
	KTextEditor::View* getView();
	QString getFilePath();
	QString getFileName();
	bool isWritable();
	bool isModified();
	QString getSelection();
	QString getSuggestedText();
	QString getLineContents(uint);
	void setLayout(bool bShowTagList, const SPLIT_SIZES&);	
	bool getCursorPos(int&, int&);
	bool setCursorPos(uint, uint nCol = 1);
	void setTabWidth(uint);
	
	// virtual QString getWordUnderCursor(uint* pPosInWord = NULL);

	/**
	 * Implements the SymbolCompletion interface method for returning an
	 * object that supports KTextEditor::CodeCompletionInterface.
	 * @return	A pointer to the View object of the editor
	 */	
	virtual QObject* getCCObject() { return m_pView; }
	
	/**
	 * @return	true if a previously unsaved file is currently being edited,
	 *			false otherwise
	 */
	bool isNewFile() { return m_bNewFile; }
	
	/** The identifier of the Window menu item which activates this page. */
	int m_nMenuId;
#endif 
/*
public slots:
	void slotGotoLine(uint);
	void slotMenuSelect();
	void slotCompleteSymbol();
*/
	
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
	
	/** A Ctags process to use on the edited source file. */
	// CtagsFrontend m_ctags;
	
	/** An adjustable splitter for separating the tag list from the editor
		part. */
	// QSplitter* m_pSplit;
	
	/** A list view for displaying Ctags results. */
	// CtagsList* m_pCtagsList;
	
	/** The document part of the editor. */
	QTextEdit* m_pDoc;
	
#if 0
	/** The view part of the editor. */
	//KTextEditor::View* m_pView;
	
	/** Whether a source file is currently loaded. */
	bool m_bOpen;
	
	/** Whether the file being edited is a new one (i.e., never saved 
	 	before.) */
	bool m_bNewFile;
	
	/** The name of the file being edited. */
	QString m_sName;
	
	/** true if the file system allows this file to be modified, false
	    otherwise. */
	bool m_bWritable;
	
	/** This variable is required in addition to m_pDoc->isModified() so
		that the modified() signal is emitted only once. */
	bool m_bModified;
	
	/** The current line position of the cursor. */
	uint m_nLine;
	
	/** Provides symbol completion. */
	// SymbolCompletion* m_pCompletion;
	
	/** Determines whether size changes in the child widgets should be
		stored in the global configuration file. 
		Needs to be explicitly set to false before _each_ operation that
		does not wish to change the defaults. */
	bool m_bSaveNewSizes;
#endif
	
/*
private slots:
	void slotChildResized();
	void slotFileOpened();
	void slotSetModified();
	void slotUndoChanged();
	void slotCursorPosChange();
*/
};
} // namespace kscope4
#endif
// Sun Mar 18 11:59:55 PDT 2012
