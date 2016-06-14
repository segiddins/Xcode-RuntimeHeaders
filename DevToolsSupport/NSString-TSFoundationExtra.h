//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSFoundationExtra)
+ (id)stringWithBase64RepresentationOfUniqueIdentifier;
+ (id)stringWithHexadecimalRepresentationOfUniqueIdentifier;
+ (id)stringWithUnicodeInvisibleTimesCharacter;
+ (id)stringWithUnicodeInvisibleSeparatorCharacter;
+ (id)stringWithBase64RepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithHexRepresentationOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
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
- (id)stringByQuotingWhitespaceIfNeeded;
- (id)stringByQuotingIfNeeded;
- (id)stringByQuotingOnlyIfNeeded:(BOOL)arg1 quoteTabsAndEOLs:(BOOL)arg2 quoteHighBitUnichars:(BOOL)arg3;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByRemovingPrefix:(id)arg1;
- (id)stringByRemovingLeadingAndTrailingWhitespaceAndNewlines;
- (id)stringByRemovingLeadingAndTrailingWhitespace;
- (id)stringByRemovingLeadingAndTrailingCharactersFromSet:(id)arg1;
@end

