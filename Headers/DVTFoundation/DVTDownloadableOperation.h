//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <DVTFoundation/DVTProgressReporting-Protocol.h>

@class NSString;

@interface DVTDownloadableOperation : DVTOperation <DVTProgressReporting>
{
    BOOL _userRequested;
    BOOL _cancelable;
    long long _progress;
    unsigned long long _progressWeight;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain) NSString *title; // @synthesize title=_title;
@property BOOL cancelable; // @synthesize cancelable=_cancelable;
@property BOOL userRequested; // @synthesize userRequested=_userRequested;
@property unsigned long long progressWeight; // @synthesize progressWeight=_progressWeight;
@property long long progress; // @synthesize progress=_progress;
- (void)cancel;
@property(readonly, getter=shouldProceed) BOOL shouldProceed;
- (void)downloadableOperationMain;
- (void)main;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

