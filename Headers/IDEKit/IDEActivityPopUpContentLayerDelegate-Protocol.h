//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/CALayerDelegate-Protocol.h>

@class IDEActivityPopUpContentLayer;

@protocol IDEActivityPopUpContentLayerDelegate <CALayerDelegate>

@optional
- (void)popUpContentLayer:(IDEActivityPopUpContentLayer *)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)doneButtonWasClickedInPopUpContentLayer:(IDEActivityPopUpContentLayer *)arg1;
@end

