/******************************************************
                     TERMINAL                         *
******************************************************/
void die(const char *s);
void disableRawMode();
void enableRawMode();
int editorReadKey();
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);

/******************************************************
               SYNTAX HIGHLIGHTING                    *
******************************************************/
int is_separator(int c);
void editorUpdateSyntax(erow *row);
int editorSyntaxToColor(int hl);
void editorSelectSyntaxHighlight();

/******************************************************
                   ROW OPERATIONS                     *
******************************************************/
int editorRowCxToRx(erow *row, int cx);
int editorRowRxToCx(erow *row, int rx);
void editorUpdateRow(erow *row);
void editorInsertRow(int at, char *s, size_t len);
void editorFreeRow(erow *row);
void editorDelRow(int at);
void editorRowInsertChar(erow *row, int at, int c);
void editorRowAppendString(erow *row, char *s, size_t len);
void editorRowDelChar(erow *row, int at);

/******************************************************
                  EDITOR OPERATIONS                   *
******************************************************/
void editorInsertChar(int c);
void editorInsertNewline();
void editorDelChar();

/******************************************************
                      FILE IO                         *
******************************************************/
char *editorRowsToString(int *buflen);
void editorOpen(char *filename);
void editorSave();

/******************************************************
                     FIND TEXT                        *
******************************************************/
void editorFindCallback(char *query, int key);
void editorFind();

/******************************************************
                   APPEND BUFFER                      *
******************************************************/
struct abuf {
	char *b;
	int len;
};

#define ABUF_INIT {NULL, 0}
void abAppend(struct abuf *ab, const char *s, int len);
void abFree(struct abuf *ab);

/******************************************************
                      OUTPUT                          *
******************************************************/
void editorScroll();
void editorDrawRows(struct abuf *ab);
void editorDrawStatusBar(struct abuf *ab);
void editorDrawMessageBar(struct abuf *ab);
void editorRefreshScreen();
void editorSetStatusMessage(const char *fmt, ...);
void editorRefreshScreen();

/******************************************************
                      INPUT                           *
******************************************************/
char *editorPrompt(char *prompt, void (*callback)(char *, int));
void editorMoveCursor(int key);
void editorProcessKeypress();
