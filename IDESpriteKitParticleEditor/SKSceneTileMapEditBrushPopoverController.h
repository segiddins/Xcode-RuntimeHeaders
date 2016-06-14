//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDESpriteKitParticleEditor/NSPopoverDelegate-Protocol.h>

@class NSPopover, NSSlider, NSString;
@protocol SKSceneTileMapEditBrushPopoverDelegate;

@interface SKSceneTileMapEditBrushPopoverController : DVTViewController <NSPopoverDelegate>
{
    BOOL _hasInstalled;
    BOOL _invalidateAfterClose;
    NSSlider *_brushSizeSlider;
    BOOL _notifyOnClose;
    id <SKSceneTileMapEditBrushPopoverDelegate> _delegate;
    NSPopover *_popover;
    unsigned long long _currentBrushIndex;
}

@property(nonatomic) unsigned long long currentBrushIndex; // @synthesize currentBrushIndex=_currentBrushIndex;
@property(nonatomic) BOOL notifyOnClose; // @synthesize notifyOnClose=_notifyOnClose;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <SKSceneTileMapEditBrushPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)sliderChanged:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidInstall;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initUsingDefaultNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

