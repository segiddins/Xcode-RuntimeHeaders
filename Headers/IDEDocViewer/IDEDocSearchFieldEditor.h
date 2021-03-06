//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

@protocol IDEDocSearchFieldEditorDelegate;

@interface IDEDocSearchFieldEditor : NSTextView
{
    id <IDEDocSearchFieldEditorDelegate> _searchFieldEditorDelegate;
}

@property id <IDEDocSearchFieldEditorDelegate> searchFieldEditorDelegate; // @synthesize searchFieldEditorDelegate=_searchFieldEditorDelegate;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)becomeFirstResponder;
- (void)insertTab:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)complete:(id)arg1;
- (void)keyDown:(id)arg1;

@end

