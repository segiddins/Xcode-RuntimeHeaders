//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

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

