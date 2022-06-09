char *CPP_HL_extensions[] = { ".cpp", ".hpp", ".cc", NULL };
char *CPP_HL_keywords[] = {
	// keywords
	"switch", "if", "while", "for", "break", "continue", "return", "else",
	"struct", "union", "typedef", "static", "enum", "class", "case", "auto",
	"do", "default", "extern", "goto", "register", "volatile", "class",
	"private", "public", "asm", "namespace", "explicit", "new", "delete",
	"true", "false", "try", "throw", "catch", "template", "this", "inline",
	"mutable", "protected", "using", "virtual",

	// pre-processor statements
	"#include", "#pragma", "#define", "#undef", "#if", "#elif", "#else",
	"#ifdef", "#ifndef", "#error",

	// data types
	"int|", "long|", "double|", "float|", "char|", "unsigned|", "signed|",
	"void|", "short|", "bool|", "wchar_t|", NULL
};
