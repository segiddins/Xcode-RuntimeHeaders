//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSImage, NSString, NSView;

@protocol IDEDebugGaugeReportTopSectionContentDelegate <NSObject>
- (NSString *)topSectionTitle;

@optional
- (NSArray *)topSectionComponentEntries;
- (NSArray *)topSectionSubDescriptionViews;
- (NSView *)topSectionAccessoryView;
- (NSView *)topSectionDescription;
- (NSArray *)topSectionDescriptionEntries;
- (NSView *)topSectionShortDescription;
- (NSView *)topSectionCenterTitleAccessoryView;
- (NSView *)topSectionTitleAccessoryView;
- (NSString *)topSectionShortDescriptionTitle;
- (NSImage *)topSectionImage;
@end

