//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCElementCellDisplay.h>

@interface XCElementTextFieldCellDisplay : XCElementCellDisplay
{
}

- (void)abortEditingForDisplayer:(struct NSObject *)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)displayer:(struct NSObject *)arg1 selectAll:(BOOL)arg2;
- (struct NSObject *)editingDisplayerFor:(id)arg1;
- (BOOL)displayer:(struct NSObject *)arg1 mouseDownOnCellDisplay:(id)arg2;
- (void)_completeEditingState:(id)arg1 displayer:(struct NSObject *)arg2 cell:(id)arg3;
- (void)_endEditingStateForDisplayer:(struct NSObject *)arg1;
- (void)_prepareEditingState:(id)arg1 displayer:(struct NSObject *)arg2 cell:(id)arg3;
- (void)_storeEditorOffsets:(id)arg1 bounds:(struct CGRect)arg2 mainElement:(id)arg3;
- (BOOL)displayer:(struct NSObject *)arg1 isTabCandidateWithExtendedTabbing:(BOOL)arg2;
- (id)displayer:(struct NSObject *)arg1 cursorAt:(struct CGPoint)arg2;
- (void)displayer:(struct NSObject *)arg1 drawForeground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;

@end

