//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSAttributedString;

@interface IDEPlaygroundQuickLookSingleLineTextView : NSTextView
{
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (void)updateTextStorageForAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;

@end
