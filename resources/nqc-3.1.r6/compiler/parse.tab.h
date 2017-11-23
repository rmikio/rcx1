#define OR 257
#define AND 258
#define REL_EQ 259
#define REL_NE 260
#define REL_LE 261
#define REL_GE 262
#define LEFT 263
#define RIGHT 264
#define UMINUS 265
#define INDIRECT 266
#define INCDEC 267
#define ABS 268
#define SIGN 269
#define TYPE 270
#define EVENT_SRC 271
#define LOWER_THAN_ELSE 272
#define ELSE 273
#define LOWER_THAN_EXPR_SHIFT 274
#define ID 275
#define NUMBER 276
#define ASSIGN 277
#define ASSIGN2 278
#define TASKOP 279
#define JUMP 280
#define TASK 281
#define SUB 282
#define STRING 283
#define PP_DEFINE 284
#define PP_INCLUDE 285
#define NL 286
#define WS 287
#define PP_ARG 288
#define PP_UNKNOWN 289
#define PP_IFDEF 290
#define PP_IF 291
#define PP_ELSE 292
#define PP_ELIF 293
#define PP_ENDIF 294
#define PP_UNDEF 295
#define PP_PRAGMA 296
#define PP_GLOM 297
#define PP_ERROR 298
#define PP_WARNING 299
#define IF 300
#define WHILE 301
#define DO 302
#define FOR 303
#define REPEAT 304
#define SWITCH 305
#define CASE 306
#define DEFAULT 307
#define MONITOR 308
#define CATCH 309
#define ACQUIRE 310
#define GOTO 311
#define ASM 312
#define INT 313
#define T_VOID 314
#define T_CONST 315
#define SENSOR 316
#define TASKID 317
#define NOLIST 318
#define RES 319
#define CTRUE 320
#define CFALSE 321
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int			fInt;
	bool		fBool;
	Resource*	fResource;
	Fragment*	fFragment;
	Stmt*		fStmt;
	BlockStmt*	fBlock;
	Symbol*		fSymbol;
	char*		fString;
	Expr*		fExpr;
	FunctionDef*	fFunction;
	CallStmt*	fCall;
	AsmStmt*	fAsmStmt;
	Field*		fField;
	CaseStmt*	fCaseStmt;
	DeclareStmt*	fDeclareStmt;
	LocationNode*	fLocation;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
