//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEActivityPopUpContentLayerController;

@protocol IDEActivityPopUpContentLayerControllerDelegate <NSObject>

@optional
- (void)popUpContentLayerController:(IDEActivityPopUpContentLayerController *)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)popUpContentLayerController:(IDEActivityPopUpContentLayerController *)arg1 displayedReportCountDidChangeTo:(unsigned long long)arg2;
- (void)doneButtonWasClickedInPopUpContentLayerController:(IDEActivityPopUpContentLayerController *)arg1;
@end

