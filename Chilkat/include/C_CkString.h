// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkString_H
#define _C_CkString_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkString CkString_Create(void);
CK_VISIBLE_PUBLIC void CkString_Dispose(HCkString handle);
CK_VISIBLE_PUBLIC int CkString_getNumArabic(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumAscii(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumCentralEuro(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumChinese(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumCyrillic(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumGreek(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumHebrew(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumJapanese(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumKorean(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumLatin(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getNumThai(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_append(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC void CkString_appendAnsi(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC void CkString_appendChar(HCkString cHandle, char c);
CK_VISIBLE_PUBLIC void CkString_appendCurrentDateRfc822(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_appendDateRfc822(HCkString cHandle, SYSTEMTIME *dateTime);
CK_VISIBLE_PUBLIC void CkString_appendDateRfc822Gmt(HCkString cHandle, SYSTEMTIME *dateTime);
CK_VISIBLE_PUBLIC void CkString_appendEnc(HCkString cHandle, const char *str, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_appendHexData(HCkString cHandle, const unsigned char *byteData, unsigned long numBytes);
CK_VISIBLE_PUBLIC void CkString_appendInt(HCkString cHandle, int n);
#ifdef WIN32
CK_VISIBLE_PUBLIC void CkString_appendLastWindowsError(HCkString cHandle);
#endif
CK_VISIBLE_PUBLIC void CkString_appendN(HCkString cHandle, const char *str, unsigned long numBytes);
CK_VISIBLE_PUBLIC void CkString_appendNU(HCkString cHandle, const wchar_t *wideStr, int numChars);
CK_VISIBLE_PUBLIC void CkString_appendRandom(HCkString cHandle, int numBytes, const char *encoding);
CK_VISIBLE_PUBLIC void CkString_appendStr(HCkString cHandle, HCkString strObj);
CK_VISIBLE_PUBLIC void CkString_appendU(HCkString cHandle, const wchar_t *unicode);
CK_VISIBLE_PUBLIC void CkString_appendUtf8(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC void CkString_base64Decode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_base64DecodeW(HCkString cHandle, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_base64Encode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_base64EncodeW(HCkString cHandle, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC BOOL CkString_beginsWith(HCkString cHandle, const char *substr);
CK_VISIBLE_PUBLIC BOOL CkString_beginsWithStr(HCkString cHandle, HCkString strObj);
CK_VISIBLE_PUBLIC BOOL CkString_beginsWithW(HCkString cHandle, const wchar_t *str);
CK_VISIBLE_PUBLIC char CkString_charAt(HCkString cHandle, int idx);
CK_VISIBLE_PUBLIC wchar_t CkString_charAtU(HCkString cHandle, int idx);
CK_VISIBLE_PUBLIC void CkString_chopAtFirstChar(HCkString cHandle, char ch);
CK_VISIBLE_PUBLIC void CkString_chopAtStr(HCkString cHandle, HCkString subStrObj);
CK_VISIBLE_PUBLIC void CkString_clear(HCkString cHandle);
CK_VISIBLE_PUBLIC HCkString CkString_clone(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_compareStr(HCkString cHandle, HCkString str);
CK_VISIBLE_PUBLIC BOOL CkString_containsSubstring(HCkString cHandle, const char *substr);
CK_VISIBLE_PUBLIC BOOL CkString_containsSubstringNoCase(HCkString cHandle, const char *substr);
CK_VISIBLE_PUBLIC BOOL CkString_containsSubstringNoCaseW(HCkString cHandle, const wchar_t *substr);
CK_VISIBLE_PUBLIC BOOL CkString_containsSubstringW(HCkString cHandle, const wchar_t *substr);
CK_VISIBLE_PUBLIC int CkString_countCharOccurances(HCkString cHandle, char ch);
CK_VISIBLE_PUBLIC void CkString_decodeXMLSpecial(HCkString cHandle);
CK_VISIBLE_PUBLIC double CkString_doubleValue(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_eliminateChar(HCkString cHandle, char ansiChar, int startIndex);
CK_VISIBLE_PUBLIC void CkString_encodeXMLSpecial(HCkString cHandle);
CK_VISIBLE_PUBLIC BOOL CkString_endsWith(HCkString cHandle, const char *substr);
CK_VISIBLE_PUBLIC BOOL CkString_endsWithStr(HCkString cHandle, HCkString substrObj);
CK_VISIBLE_PUBLIC BOOL CkString_endsWithW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC void CkString_entityDecode(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_entityEncode(HCkString cHandle);
CK_VISIBLE_PUBLIC BOOL CkString_equals(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkString_equalsIgnoreCase(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkString_equalsIgnoreCaseStr(HCkString cHandle, HCkString strObj);
CK_VISIBLE_PUBLIC BOOL CkString_equalsIgnoreCaseW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC BOOL CkString_equalsStr(HCkString cHandle, HCkString strObj);
CK_VISIBLE_PUBLIC BOOL CkString_equalsW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC HCkString CkString_getChar(HCkString cHandle, int idx);
CK_VISIBLE_PUBLIC int CkString_getNumChars(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getSizeAnsi(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getSizeUnicode(HCkString cHandle);
CK_VISIBLE_PUBLIC int CkString_getSizeUtf8(HCkString cHandle);
CK_VISIBLE_PUBLIC const char *CkString_getString(HCkString cHandle);
CK_VISIBLE_PUBLIC const char *CkString_getStringAnsi(HCkString cHandle);
CK_VISIBLE_PUBLIC const char *CkString_getStringUtf8(HCkString cHandle);
CK_VISIBLE_PUBLIC const wchar_t *CkString_getUnicode(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_hexDecode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_hexDecodeW(HCkString cHandle, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_hexEncode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_hexEncodeW(HCkString cHandle, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC int CkString_indexOf(HCkString cHandle, const char *substr);
CK_VISIBLE_PUBLIC int CkString_indexOfStr(HCkString cHandle, HCkString substrObj);
CK_VISIBLE_PUBLIC int CkString_indexOfW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC int CkString_intValue(HCkString cHandle);
CK_VISIBLE_PUBLIC BOOL CkString_isEmpty(HCkString cHandle);
CK_VISIBLE_PUBLIC char CkString_lastChar(HCkString cHandle);
CK_VISIBLE_PUBLIC BOOL CkString_loadFile(HCkString cHandle, const char *path, const char *charsetEncoding);
CK_VISIBLE_PUBLIC BOOL CkString_loadFileW(HCkString cHandle, const wchar_t *path, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC BOOL CkString_matches(HCkString cHandle, const char *strPattern);
CK_VISIBLE_PUBLIC BOOL CkString_matchesNoCase(HCkString cHandle, const char *strPattern);
CK_VISIBLE_PUBLIC BOOL CkString_matchesNoCaseW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC BOOL CkString_matchesStr(HCkString cHandle, HCkString strPatternObj);
CK_VISIBLE_PUBLIC BOOL CkString_matchesW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC void CkString_minimizeMemory(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_obfuscate(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_prepend(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC void CkString_prependW(HCkString cHandle, const wchar_t *s);
CK_VISIBLE_PUBLIC void CkString_punyDecode(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_punyEncode(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_qpDecode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_qpDecodeW(HCkString cHandle, const wchar_t *charset);
CK_VISIBLE_PUBLIC void CkString_qpEncode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_qpEncodeW(HCkString cHandle, const wchar_t *charset);
CK_VISIBLE_PUBLIC int CkString_removeAll(HCkString cHandle, HCkString substr);
CK_VISIBLE_PUBLIC void CkString_removeCharOccurances(HCkString cHandle, char ch);
CK_VISIBLE_PUBLIC void CkString_removeChunk(HCkString cHandle, int charStartPos, int numChars);
CK_VISIBLE_PUBLIC void CkString_removeDelimited(HCkString cHandle, const char *beginDelim, const char *endDelim, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkString_removeFirst(HCkString cHandle, HCkString substr);
CK_VISIBLE_PUBLIC int CkString_replaceAll(HCkString cHandle, HCkString findStrObj, HCkString replaceStrObj);
CK_VISIBLE_PUBLIC int CkString_replaceAllOccurances(HCkString cHandle, const char *findStr, const char *replaceStr);
CK_VISIBLE_PUBLIC int CkString_replaceAllOccurancesW(HCkString cHandle, const wchar_t *pattern, const wchar_t *replacement);
CK_VISIBLE_PUBLIC void CkString_replaceChar(HCkString cHandle, char findCh, char replaceCh);
CK_VISIBLE_PUBLIC BOOL CkString_replaceFirst(HCkString cHandle, HCkString findStrObj, HCkString replaceStrObj);
CK_VISIBLE_PUBLIC BOOL CkString_replaceFirstOccurance(HCkString cHandle, const char *findStr, const char *replaceStr);
CK_VISIBLE_PUBLIC BOOL CkString_replaceFirstOccuranceW(HCkString cHandle, const wchar_t *pattern, const wchar_t *replacement);
CK_VISIBLE_PUBLIC BOOL CkString_saveToFile(HCkString cHandle, const char *path, const char *charsetEncoding);
CK_VISIBLE_PUBLIC BOOL CkString_saveToFileW(HCkString cHandle, const wchar_t *path, const wchar_t *charset);
CK_VISIBLE_PUBLIC void CkString_setStr(HCkString cHandle, HCkString s);
CK_VISIBLE_PUBLIC void CkString_setString(HCkString cHandle, const char *str);
CK_VISIBLE_PUBLIC void CkString_setStringAnsi(HCkString cHandle, const char *s);
CK_VISIBLE_PUBLIC void CkString_setStringU(HCkString cHandle, const wchar_t *unicode);
CK_VISIBLE_PUBLIC void CkString_setStringUtf8(HCkString cHandle, const char *s);
CK_VISIBLE_PUBLIC void CkString_shorten(HCkString cHandle, int n);
CK_VISIBLE_PUBLIC HCkStringArray CkString_split(HCkString cHandle, char delimiterChar, BOOL exceptDoubleQuoted, BOOL exceptEscaped, BOOL keepEmpty);
CK_VISIBLE_PUBLIC HCkStringArray CkString_split2(HCkString cHandle, const char *delimiterChars, BOOL exceptDoubleQuoted, BOOL exceptEscaped, BOOL keepEmpty);
CK_VISIBLE_PUBLIC HCkStringArray CkString_split2W(HCkString cHandle, const wchar_t *splitCharSet, BOOL exceptDoubleQuoted, BOOL exceptEscaped, BOOL keepEmpty);
CK_VISIBLE_PUBLIC HCkStringArray CkString_splitAtWS(HCkString cHandle);
CK_VISIBLE_PUBLIC HCkString CkString_substring(HCkString cHandle, int startCharIndex, int numChars);
CK_VISIBLE_PUBLIC void CkString_toCRLF(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_toLF(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_toLowerCase(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_toUpperCase(HCkString cHandle);
CK_VISIBLE_PUBLIC HCkStringArray CkString_tokenize(HCkString cHandle, const char *punctuation);
CK_VISIBLE_PUBLIC HCkStringArray CkString_tokenizeW(HCkString cHandle, const wchar_t *punctuation);
CK_VISIBLE_PUBLIC void CkString_trim(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_trim2(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_trimInsideSpaces(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_unobfuscate(HCkString cHandle);
CK_VISIBLE_PUBLIC void CkString_urlDecode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_urlDecodeW(HCkString cHandle, const wchar_t *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_urlEncode(HCkString cHandle, const char *charsetEncoding);
CK_VISIBLE_PUBLIC void CkString_urlEncodeW(HCkString cHandle, const wchar_t *charsetEncoding);
#endif
