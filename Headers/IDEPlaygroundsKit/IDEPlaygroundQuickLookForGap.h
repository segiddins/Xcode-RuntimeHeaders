//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundsKit/IDEPlaygroundQuickLookProvider-Protocol.h>

@class NSAttributedString, NSString, NSView;

@interface IDEPlaygroundQuickLookForGap : NSObject <IDEPlaygroundQuickLookProvider>
{
    NSAttributedString *_gapAttributedString;
    NSView *_quickLookForNaturalSize;
}

- (void).cxx_destruct;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
@property(readonly, copy) NSAttributedString *attributedTitle;
@property(readonly) NSView *iconView;
- (id)initWithGap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

