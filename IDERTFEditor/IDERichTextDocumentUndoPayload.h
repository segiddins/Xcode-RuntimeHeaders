//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDERichTextDocumentUndoPayload : NSObject
{
    NSString *_string;
    NSString *_replacementString;
    struct _NSRange _range;
}

@property struct _NSRange range; // @synthesize range=_range;
@property(copy) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(copy) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 replacementString:(id)arg2 range:(struct _NSRange)arg3;

@end

