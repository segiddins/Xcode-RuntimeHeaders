//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBPreviewDocumentBackgroundView, NSEvent, NSSet;

@protocol IBPreviewDocumentBackgroundViewDelegate <NSObject>
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 updateSelectionWithBandIntersectingObjects:(NSSet *)arg2 withEvent:(NSEvent *)arg3 initialSelection:(NSSet *)arg4;
- (NSSet *)backgroundViewBandSelectionCandidates:(IBPreviewDocumentBackgroundView *)arg1;
- (NSSet *)backgroundViewInitialBandSelectionContent:(IBPreviewDocumentBackgroundView *)arg1;
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 didChangeShowingFirstResponderToValue:(BOOL)arg2;
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 userDidMagnifyWithEvent:(NSEvent *)arg2;
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 userDidRequestRemoval:(id)arg2;
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 userDidDoubleClickInEmptyAreaWithEvent:(NSEvent *)arg2;
- (void)backgroundView:(IBPreviewDocumentBackgroundView *)arg1 userDidClickInEmptyAreaWithEvent:(NSEvent *)arg2;
@end

