//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDEPlaygroundQuickLookSingleLineTextView;
@protocol IDEPlaygroundQuickLookProvider;

@interface IDEPlaygroundQuickLookSingleLineView : NSView
{
    BOOL _needsUpdatedConstraints;
    BOOL _labelNeedsUpdate;
    NSView *_iconView;
    id <IDEPlaygroundQuickLookProvider> _quickLookProvider;
    IDEPlaygroundQuickLookSingleLineTextView *_label;
}

- (void).cxx_destruct;
@property(retain) IDEPlaygroundQuickLookSingleLineTextView *label; // @synthesize label=_label;
@property(retain, nonatomic) id <IDEPlaygroundQuickLookProvider> quickLookProvider; // @synthesize quickLookProvider=_quickLookProvider;
@property(readonly) NSView *iconView; // @synthesize iconView=_iconView;
- (void)layout;
- (void)_updateLabel;
- (void)_updateIconView;
- (void)_updateViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

