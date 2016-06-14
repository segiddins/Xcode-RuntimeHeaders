//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

#import <IDESourceEditor/NSLayoutManagerDelegate-Protocol.h>

@class DVTTextStorage, NSString;

@interface DVTSliceTextStorage : NSTextStorage <NSLayoutManagerDelegate>
{
    DVTTextStorage *_underlyingTextStorage;
    struct _NSRange _sliceRange;
}

- (void).cxx_destruct;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)initWithRange:(struct _NSRange)arg1 inUnderlyingTextStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

