//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DVTSearchFieldTextEditor.h"

@interface DVTFindPatternFieldEditor : DVTSearchFieldTextEditor
{
}

+ (id)findPatternFieldEditorForWindow:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (id)writablePasteboardTypes;
- (id)acceptableDragTypes;
- (BOOL)usesFontPanel;
- (void)setUsesFontPanel:(BOOL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

