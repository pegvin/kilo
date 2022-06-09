#include "../syntax/c.h"
#include "../syntax/cpp.h"
#include "../syntax/python.h"

struct editorSyntax HLDB[] = {
	{
		"C",
		C_HL_extensions,
		C_HL_keywords,
		"//", "/*", "*/",
		HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
	},
	{
		"C++",
		CPP_HL_extensions,
		CPP_HL_keywords,
		"//", "/*", "*/",
		HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
	},
	{
		"Python",
		PYTHON_HL_extensions,
		PYTHON_HL_keywords,
		"#", "\"\"\"", "\"\"\"",
		HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
	},
};

#define HLDB_ENTRIES (sizeof(HLDB) / sizeof(HLDB[0]))
