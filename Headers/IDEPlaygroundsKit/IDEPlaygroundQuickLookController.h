//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IDEPlaygroundQuickLookSingleLineView;
@protocol IDEPlaygroundQuickLookProvider;

@interface IDEPlaygroundQuickLookController : NSViewController
{
    IDEPlaygroundQuickLookSingleLineView *_singleLineView;
    BOOL _enabled;
    id <IDEPlaygroundQuickLookProvider> _quickLookProvider;
}

+ (id)createSingleLineViewUsingQuickLookProvider:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IDEPlaygroundQuickLookProvider> quickLookProvider; // @synthesize quickLookProvider=_quickLookProvider;
- (void)fontAndColorSourceTextSettingsChanged;
@property(getter=isEnabled) BOOL enabled;
- (id)iconOnlyViewForCollectionView;
- (id)quickLookViewForCollectionView;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
- (id)quickLookViewForSingleLineSize;
@property(readonly, nonatomic) IDEPlaygroundQuickLookSingleLineView *singleLineView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

