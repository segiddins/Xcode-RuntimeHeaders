//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class NSProgressIndicator, NSString;

@interface IDEDistributionUploadStepViewController : IDEDistributionStepViewController
{
    BOOL _wantsCancel;
    BOOL _cancelable;
    NSProgressIndicator *_progressIndicator;
    double _progress;
    NSString *_message;
}

+ (id)keyPathsForValuesAffectingCanCancel;
+ (id)keyPathsForValuesAffectingWantsCancelAction;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
@property BOOL cancelable; // @synthesize cancelable=_cancelable;
@property BOOL wantsCancel; // @synthesize wantsCancel=_wantsCancel;
@property(copy) NSString *message; // @synthesize message=_message;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void)takeCancelAction;
- (BOOL)canCancel;
- (BOOL)wantsCancelAction;
- (void)viewDidInstall;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;

@end

