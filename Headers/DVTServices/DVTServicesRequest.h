//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol DVTServicesSession;

@interface DVTServicesRequest : NSObject
{
    id <DVTServicesSession> _session;
}

@property(readonly, nonatomic) id <DVTServicesSession> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_userAgentForExecutionContext:(long long)arg1;
- (id)userAgent;
@property(readonly) NSDictionary *standardXcodeHeaders;
@property(readonly) NSURL *requestURL;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

