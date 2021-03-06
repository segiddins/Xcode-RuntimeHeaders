//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSStringAdditions)
+ (BOOL)isFileUTF8WithBOM:(id)arg1 fileData:(id)arg2;
+ (BOOL)isFileUnicode:(id)arg1 fileData:(id)arg2;
+ (void)setTSDefaultCStringEncoding:(unsigned long long)arg1;
+ (unsigned long long)TSDefaultCStringEncoding;
+ (id)stringWithBase64RepresentationOfUniqueIdentifier;
+ (id)stringWithHexadecimalRepresentationOfUniqueIdentifier;
+ (id)stringWithUnicodeInvisibleTimesCharacter;
+ (id)stringWithUnicodeInvisibleSeparatorCharacter;
+ (id)stringWithBase64RepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithHexRepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)_PBX_pathCacheStatsDescriptionWithMapDump:(BOOL)arg1;
- (BOOL)writeUsingFileSystemEncodingToFile:(id)arg1 atomically:(BOOL)arg2;
- (long long)versionNumberComparison:(id)arg1;
- (struct _NSRange)rangeNotHavingLiteralPrefixAndSuffixInCommonWithRange:(struct _NSRange)arg1 ofString:(id)arg2;
- (id)initWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2 stopAtTrailingIncompleteUTF8Sequence:(BOOL)arg3 getUsedLength:(unsigned long long *)arg4 getNumberOfMalformedSequences:(unsigned long long *)arg5;
- (id)initWithUnicodeOrMacOSRomanContentsOfFile:(id)arg1 getStringEncoding:(unsigned long long *)arg2;
- (id)initWithContentsOfFile:(id)arg1 defaultCStringEncoding:(unsigned long long)arg2 getStringEncoding:(unsigned long long *)arg3;
- (id)stringByEscapingPercents;
- (id)uniqueStringAmongStrings:(id)arg1;
- (id)stringByUnescapingFromXML;
- (id)stringByManglingToLegalCIdentifier;
- (id)stringByAbbreviatingWithEllipsisInMiddleToLength:(unsigned long long)arg1;
- (id)stringByDeletingAllWhitespace;
- (id)stringByDeletingTrailingWhitespace;
- (id)stringByDeletingLeadingWhitespace;
- (id)TS_stringByExpandingEnvironmentVariables;
- (id)TS_stringByExpandingVariables:(id)arg1 options:(unsigned long long)arg2;
- (id)TS_stringByExpandingVariables:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;
- (id)namesOfExpandableVariables;
- (void)testMacroExpansion;
- (BOOL)_getVariableNameRange:(struct _NSRange *)arg1 openDelimiterRange:(struct _NSRange *)arg2 closeDelimiterRange:(struct _NSRange *)arg3 ofFirstVariableReferenceInRange:(struct _NSRange)arg4;
- (id)componentsSeparatedByUnquotedWhitespace;
- (id)arrayByParsingAsStringList;
- (id)arrayByParsingAsCommandLineArguments;
- (id)_componentsSeparatedByUnquotedWhitespacePreservingQuotes:(BOOL)arg1;
- (unsigned long long)numberOfLines;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (id)firstMatchingPrefixFromArray:(id)arg1;
- (id)substringBetweenString:(id)arg1 andString:(id)arg2 crossingLineBoundaries:(BOOL)arg3;
- (id)substringBeforeString:(id)arg1 crossingLineBoundaries:(BOOL)arg2;
- (id)substringAfterString:(id)arg1 crossingLineBoundaries:(BOOL)arg2;
- (id)dictionaryByParsingAsSimpleAssignmentsAndGetLocalizedErrorString:(id *)arg1;
- (id)stringByAppendingPathSeparatorIfNeeded;
- (id)stringByReplacingSubstring:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingCharacter:(unsigned short)arg1 withCharacter:(unsigned short)arg2;
- (id)PBX_stringByReplacingBackslashWithSlash;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByRemovingPrefix:(id)arg1;
- (id)stringByRemovingLeadingAndTrailingWhitespaceAndNewlines;
- (id)stringByRemovingLeadingAndTrailingWhitespace;
- (id)stringByRemovingLeadingAndTrailingCharactersFromSet:(id)arg1;
- (id)stringByCanonicalizingNonResolvedAbsolutePath;
- (id)stringByCanonicalizingPath;
- (id)stringByCanonicalizingPathUsingBasePath:(id)arg1;
- (long long)comparePaths:(id)arg1;
- (id)regionVariantName;
- (id)stringByMakingPathRelativeToPath:(id)arg1;
- (id)PBX_stringByResolvingSymlinksInPath;
- (BOOL)isPathInDirectory:(id)arg1;
@end

