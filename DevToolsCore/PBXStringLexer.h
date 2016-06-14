//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXSourceLexer.h>

@class NSMutableData, NSString;

@interface PBXStringLexer : PBXSourceLexer
{
    NSMutableData *_buffData;
    void *_buff;
    NSString *_realString;
    unsigned long long _realStringLength;
    unsigned long long _scanLimit;
    BOOL _scanInProgress;
}

- (BOOL)inputIsInSet:(id)arg1;
- (BOOL)inputMatchesString:(id)arg1;
- (void)scanForLinksInRange:(struct _NSRange)arg1;
- (void)skipToEndOfLineWithEscape:(BOOL)arg1;
- (void)skipToCharacter:(unsigned short)arg1 withEscape:(BOOL)arg2;
- (unsigned short)skipToCharacter:(unsigned short)arg1 orCharacter:(unsigned short)arg2 withEscape:(BOOL)arg3;
- (void)setTokenStringToRange:(struct _NSRange)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)curLocation;
- (unsigned long long)peekCharacterInSet:(id)arg1;
- (unsigned short)peekCharWithoutSkippingWhitespace;
- (unsigned short)peekChar;
- (unsigned short)nextChar;
- (unsigned short)nextCharWithoutSkippingWhitespace;
- (void)skipWhitespace;
- (void)stringWasEdited:(struct _NSRange *)arg1 replacementLength:(long long)arg2;
- (void)setString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_endScanning;
- (void)_beginScanning;
- (void)dealloc;
- (id)initWithLexicalRules:(id)arg1;
- (void)scanSubRange:(struct _NSRange)arg1 startingInState:(int)arg2;

@end

