//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface _GlobalIDHexString : NSString
{
    NSString *_theHexString;
    NSString *_archiveComment;
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)_appendPListDescriptionToUTF8Data:(id)arg1 withIndentLevel:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithHexString:(id)arg1 archiveComment:(id)arg2;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end

