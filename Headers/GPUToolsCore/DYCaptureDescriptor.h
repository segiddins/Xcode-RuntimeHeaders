//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface DYCaptureDescriptor : NSObject
{
    unsigned long long _api;
    unsigned long long _sessionId;
    unsigned long long _framesToCapture;
    unsigned long long _triggerFrame;
    BOOL _suspendAfterCapture;
    BOOL _lockGraphicsAfterCapture;
    BOOL _includeBacktraceInFbufs;
    BOOL _isBoundaryLess;
    BOOL _unlockGraphicThreadsOnActivateCapture;
    BOOL _armPreparedCapture;
    NSURL *_localFilePathURL;
}

@property(retain, nonatomic) NSURL *localFilePathURL; // @synthesize localFilePathURL=_localFilePathURL;
@property(nonatomic) BOOL armPreparedCapture; // @synthesize armPreparedCapture=_armPreparedCapture;
@property(nonatomic) BOOL unlockGraphicThreadsOnActivateCapture; // @synthesize unlockGraphicThreadsOnActivateCapture=_unlockGraphicThreadsOnActivateCapture;
@property(nonatomic) BOOL isBoundaryLess; // @synthesize isBoundaryLess=_isBoundaryLess;
@property(nonatomic) BOOL includeBacktraceInFbufs; // @synthesize includeBacktraceInFbufs=_includeBacktraceInFbufs;
@property(nonatomic) BOOL lockGraphicsAfterCapture; // @synthesize lockGraphicsAfterCapture=_lockGraphicsAfterCapture;
@property(nonatomic) BOOL suspendAfterCapture; // @synthesize suspendAfterCapture=_suspendAfterCapture;
@property(nonatomic) unsigned long long triggerFrame; // @synthesize triggerFrame=_triggerFrame;
@property(nonatomic) unsigned long long framesToCapture; // @synthesize framesToCapture=_framesToCapture;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) unsigned long long api; // @synthesize api=_api;
- (id)initWithAPI:(unsigned long long)arg1;

@end

