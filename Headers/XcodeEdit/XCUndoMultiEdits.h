//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSLayoutManager, NSUndoManager;

@interface XCUndoMultiEdits : NSObject
{
    struct _NSRange _affectedRange;
    NSUndoManager *_undoManager;
    NSLayoutManager *_layoutManager;
    struct _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

- (BOOL)isSupportingCoalescing;
- (void)undoRedo:(id)arg1;
- (struct _NSRange)affectedRange;
- (void)setReplacementRange:(struct _NSRange)arg1;
- (void)setAffectedRange:(struct _NSRange)arg1;
- (id)undoManager;
- (id)firstTextViewForTextStorage:(id)arg1;
- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(struct _NSRange)arg4;

@end
