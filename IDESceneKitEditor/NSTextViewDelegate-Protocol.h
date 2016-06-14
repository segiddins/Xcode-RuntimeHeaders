//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/NSTextDelegate-Protocol.h>

@class NSArray, NSDictionary, NSEvent, NSMenu, NSNotification, NSOrthography, NSPasteboard, NSSharingServicePicker, NSString, NSTextAttachment, NSTextView, NSURL, NSUndoManager;
@protocol NSTextAttachmentCell;

@protocol NSTextViewDelegate <NSTextDelegate>

@optional
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2;
- (NSUndoManager *)undoManagerForTextView:(NSTextView *)arg1;
- (NSSharingServicePicker *)textView:(NSTextView *)arg1 willShowSharingServicePicker:(NSSharingServicePicker *)arg2 forItems:(NSArray *)arg3;
- (NSURL *)textView:(NSTextView *)arg1 URLForContentsOfTextAttachment:(NSTextAttachment *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)textView:(NSTextView *)arg1 didCheckTextInRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 results:(NSArray *)arg5 orthography:(NSOrthography *)arg6 wordCount:(long long)arg7;
- (NSDictionary *)textView:(NSTextView *)arg1 willCheckTextInRange:(struct _NSRange)arg2 options:(NSDictionary *)arg3 types:(unsigned long long *)arg4;
- (NSMenu *)textView:(NSTextView *)arg1 menu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 atIndex:(unsigned long long)arg4;
- (long long)textView:(NSTextView *)arg1 shouldSetSpellingState:(long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 completions:(NSArray *)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (NSString *)textView:(NSTextView *)arg1 willDisplayToolTip:(NSString *)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (void)textViewDidChangeTypingAttributes:(NSNotification *)arg1;
- (void)textViewDidChangeSelection:(NSNotification *)arg1;
- (NSDictionary *)textView:(NSTextView *)arg1 shouldChangeTypingAttributes:(NSDictionary *)arg2 toAttributes:(NSDictionary *)arg3;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRanges:(NSArray *)arg2 replacementStrings:(NSArray *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRanges:(NSArray *)arg2 toCharacterRanges:(NSArray *)arg3;
- (struct _NSRange)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 writeCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(NSPasteboard *)arg4 type:(NSString *)arg5;
- (NSArray *)textView:(NSTextView *)arg1 writablePasteboardTypesForCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4 atIndex:(unsigned long long)arg5;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
@end

