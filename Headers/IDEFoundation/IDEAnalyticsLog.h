//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDebugProcess.h>

@class IDEAnalyticsPoint, IDEStackFrame;

@interface IDEAnalyticsLog : IDEDebugProcess
{
    IDEAnalyticsPoint *_analyticsPoint;
    IDEStackFrame *_blameStackFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEStackFrame *blameStackFrame; // @synthesize blameStackFrame=_blameStackFrame;
- (void)primitiveInvalidate;
- (BOOL)isPaused;
- (id)parentDebugSession;
- (id)associatedProcessUUID;
- (id)initWithAnalyticsPoint:(id)arg1;
- (id)init;
- (id)initWithDebugSession:(id)arg1;

@end

