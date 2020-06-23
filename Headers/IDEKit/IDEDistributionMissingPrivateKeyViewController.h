//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/IDEDistributionStepInterstitialViewController-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class DVTTableView, NSArray, NSImageView, NSString, NSTextField;
@protocol IDEProvisioningBasicTeam;

@interface IDEDistributionMissingPrivateKeyViewController : IDEViewController <IDEDistributionStepInterstitialViewController, DVTTableViewDelegate, NSTableViewDataSource>
{
    NSArray *_certificates;
    id <IDEProvisioningBasicTeam> _team;
    NSTextField *_messageField;
    DVTTableView *_certsTable;
    NSImageView *_imageView;
}

@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) DVTTableView *certsTable; // @synthesize certsTable=_certsTable;
@property(retain, nonatomic) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (void)email:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateMessageField;
- (void)takeAdditionalAction;
@property(readonly, nonatomic) NSString *additionalActionTitle;
@property(readonly, nonatomic) BOOL canGoNext;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

