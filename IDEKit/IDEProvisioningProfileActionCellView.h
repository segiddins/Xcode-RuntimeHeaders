//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDEProvisioningProfilesViewController, NSButton;

@interface IDEProvisioningProfileActionCellView : NSTableCellView
{
    IDEProvisioningProfilesViewController *_profilesViewController;
    NSButton *_actionButton;
}

@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) IDEProvisioningProfilesViewController *profilesViewController; // @synthesize profilesViewController=_profilesViewController;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)update:(id)arg1;
- (void)download:(id)arg1;
- (id)contents;
- (void)setObjectValue:(id)arg1;

@end

