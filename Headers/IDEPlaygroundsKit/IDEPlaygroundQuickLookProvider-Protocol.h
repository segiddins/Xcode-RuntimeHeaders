//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsKit/NSObject-Protocol.h>

@class NSAttributedString, NSView;

@protocol IDEPlaygroundQuickLookProvider <NSObject>
@property(readonly, copy) NSAttributedString *attributedTitle;
@property(readonly) NSView *iconView;
- (NSView *)quickLookViewForResultsView;
- (NSView *)quickLookViewForNaturalSize;

@optional
- (NSView *)quickLookViewForUnadornedView;
- (NSView *)iconOnlyViewForCollectionView;
- (NSView *)quickLookViewForCollectionView;
@end

