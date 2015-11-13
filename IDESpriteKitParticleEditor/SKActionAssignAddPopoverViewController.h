//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDESpriteKitParticleEditor/NSPopoverDelegate-Protocol.h>

@class DVTTableView, NSArrayController, NSPopover, NSString;
@protocol SKActionAssignAddPopoverDelegate;

@interface SKActionAssignAddPopoverViewController : DVTViewController <NSPopoverDelegate>
{
    BOOL _invalidateAfterClose;
    DVTTableView *_tableView;
    NSArrayController *_availableActions;
    id <SKActionAssignAddPopoverDelegate> _delegate;
    NSPopover *_popover;
}

@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <SKActionAssignAddPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)assignButtonPressed:(id)arg1;
- (void)showPopoverOverView:(id)arg1 withCurrentActions:(id)arg2;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
