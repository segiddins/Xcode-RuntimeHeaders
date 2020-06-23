//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEDistributionStepInterstitialViewController-Protocol.h>

@class NSProgressIndicator, NSString;

@interface IDEDistributionProgressViewController : IDEViewController <IDEDistributionStepInterstitialViewController>
{
    NSString *_message;
    NSProgressIndicator *_spinner;
}

- (void).cxx_destruct;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(copy) NSString *message; // @synthesize message=_message;
- (void)takeAdditionalAction;
@property(readonly, nonatomic) NSString *additionalActionTitle;
@property(readonly, nonatomic) BOOL canGoNext;
- (void)loadView;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

