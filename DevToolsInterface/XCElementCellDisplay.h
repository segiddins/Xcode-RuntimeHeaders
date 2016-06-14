//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementDisplay.h>

@class NSCell;

@interface XCElementCellDisplay : XCElementDisplay
{
    NSCell *_cell;
}

- (void)dealloc;
- (void)clearViewForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 finishPositioningInContentFrame:(struct CGRect)arg2;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)drawFocusRingForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 drawForeground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)selectTabCandidateForDisplayer:(struct NSObject *)arg1;
- (BOOL)displayer:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(id)arg3;
- (BOOL)displayer:(struct NSObject *)arg1 mouseDownOnCellDisplay:(id)arg2;
- (BOOL)activeForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setActive:(BOOL)arg2;
- (id)frontCellForDisplayer:(struct NSObject *)arg1;
- (id)activeCellForDisplayer:(struct NSObject *)arg1;
- (BOOL)isEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isInEditingStateForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 installWithConfiguration:(id)arg2 useLocalData:(BOOL)arg3 initialData:(id)arg4;
- (struct CGSize)sizeProposalForDisplayer:(struct NSObject *)arg1;
- (void)dataChangedForDisplayer:(struct NSObject *)arg1;
- (void)readDataFromDisplayer:(struct NSObject *)arg1 intoCell:(id)arg2;
- (id)readDataFromDisplayer:(struct NSObject *)arg1;
- (void)configureRoundForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (id)cell;
- (void)setCell:(id)arg1;

@end

