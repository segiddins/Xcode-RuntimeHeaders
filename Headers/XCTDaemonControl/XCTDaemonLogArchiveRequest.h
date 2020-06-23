//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSDate, NSString;

@interface XCTDaemonLogArchiveRequest : NSObject <XCTDaemonRequest>
{
    NSDate *_startDate;
    CDUnknownBlockType _completion;
}

+ (id)minimumProtocolVersion;
- (void).cxx_destruct;
@property(readonly, copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)handleConnectionFailure:(id)arg1;
- (void)executeWithDaemonProxy:(id)arg1 protocolVersion:(id)arg2;
- (id)initWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

