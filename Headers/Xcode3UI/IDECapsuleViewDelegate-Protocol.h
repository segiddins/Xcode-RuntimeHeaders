//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDECapsuleView, NSArray, NSString, NSView;
@protocol NSDraggingInfo;

@protocol IDECapsuleViewDelegate <NSObject>

@optional
- (NSString *)toolTipForRemoveButton;
- (NSString *)toolTipForAddButton;
- (void)capsuleView:(IDECapsuleView *)arg1 wasDisclosed:(BOOL)arg2;
- (double)contentOriginXOffsetForCapsuleView:(IDECapsuleView *)arg1;
- (double)capsuleView:(IDECapsuleView *)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (NSView *)headerContentViewForCapsuleView:(IDECapsuleView *)arg1;
- (void)capsuleViewDidClickRemoveButton:(IDECapsuleView *)arg1;
- (BOOL)capsuleViewCanBeRemoved:(IDECapsuleView *)arg1;
- (BOOL)allowCustomContentHeaderViewToDriveHeaderHeight:(IDECapsuleView *)arg1;
- (double)capsuleViewSidePadding:(IDECapsuleView *)arg1;
- (void)capsuleView:(IDECapsuleView *)arg1 setTitle:(NSString *)arg2;
- (NSString *)capsuleViewTitleForEditing:(IDECapsuleView *)arg1;
- (BOOL)capsuleViewCanBeRenamed:(IDECapsuleView *)arg1;
- (BOOL)suppressBottomSeparator:(IDECapsuleView *)arg1;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(IDECapsuleView *)arg1;
- (BOOL)capsuleView:(IDECapsuleView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)capsuleView:(IDECapsuleView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (NSArray *)supportedDragTypes;
@end

