char *C_HL_extensions[] = { ".c", ".h", NULL };
char *C_HL_keywords[] = {
	// keywords
	"switch", "if", "while", "for", "break", "continue", "return", "else",
	"struct", "union", "typedef", "static", "enum", "class", "case", "auto",
	"do", "default", "extern", "goto", "register", "volatile", "private", "public",

	// pre-processor statements
	"#include", "#pragma", "#define", "#undef", "#if", "#elif", "#else",
	"#ifdef", "#ifndef", "#error",

	// data types
	"int|", "long|", "double|", "float|", "char|", "unsigned|", "signed|",
	"void|", "short|", NULL
};
