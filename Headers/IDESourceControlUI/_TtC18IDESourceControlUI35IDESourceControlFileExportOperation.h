//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE;

@interface _TtC18IDESourceControlUI35IDESourceControlFileExportOperation : NSOperation
{
    MISSING_TYPE *currentExportOperation;
    MISSING_TYPE *exporters;
    MISSING_TYPE *completion;
    MISSING_TYPE *lastError;
    MISSING_TYPE *stateChangeQueue;
    MISSING_TYPE *_state;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)cancel;
- (void)main;

// Remaining properties
@property(nonatomic, readonly) BOOL cancelled;
@property(nonatomic, readonly) BOOL executing;
@property(nonatomic, readonly) BOOL finished;
@property(nonatomic, readonly) BOOL ready;

@end
