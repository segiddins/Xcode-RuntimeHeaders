//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionReformatArchiveStepViewController : IDEDistributionStepViewController
{
    BOOL _canGoNext;
    BOOL _canGoPrevious;
    double _startTime;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
@property double startTime; // @synthesize startTime=_startTime;
@property BOOL canGoPrevious; // @synthesize canGoPrevious=_canGoPrevious;
@property BOOL canGoNext; // @synthesize canGoNext=_canGoNext;
- (void)spinProgressIndicatorForMinimumDurationAndContinue;
- (void)reformatArchive;
- (id)title;
- (void)viewDidLoad;

@end

