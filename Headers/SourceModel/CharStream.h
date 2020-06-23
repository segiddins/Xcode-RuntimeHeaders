//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CheapReusableSubstring, NSMutableArray, NSString, StringBuffer;

@interface CharStream : NSObject
{
    StringBuffer *_stringBuffer;
    NSString *_realString;
    CheapReusableSubstring *_cheapString;
    NSMutableArray *_savedTokens;
    id _savedBottomToken;
    BOOL _isAtBOL;
    BOOL _isAtColumnZero;
    BOOL _BOLIsKnown;
    BOOL _SeenOneCharAtBOL;
    BOOL _SeenWhitespaceAtBOL;
}

- (void).cxx_destruct;
- (id)savedToken;
- (BOOL)hasSavedTokens;
- (void)saveToken:(id)arg1;
- (id)stringWithRange:(struct _NSRange)arg1;
- (unsigned long long)locationOfNewlineFrom:(unsigned long long)arg1 searchBackwards:(BOOL)arg2;
- (unsigned long long)peekCharacterInSet:(id)arg1;
- (unsigned short)peekCharSkippingWhitespace;
- (unsigned short)peekChar;
- (BOOL)isAtColumnZero;
- (BOOL)isAtBOL;
- (void)_computeBOL;
- (unsigned short)nextCharSkippingWhitespace;
- (unsigned short)nextChar;
- (void)setLocation:(unsigned long long)arg1;
- (unsigned long long)location;
- (unsigned long long)length;
- (id)string;
- (void)setString:(id)arg1;
- (id)initWithString:(id)arg1;

@end

