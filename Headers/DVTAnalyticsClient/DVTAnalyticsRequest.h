//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTServices/DVTServicesRequest.h>

#import <DVTAnalyticsClient/NSURLSessionDelegate-Protocol.h>

@class NSString;

@interface DVTAnalyticsRequest : DVTServicesRequest <NSURLSessionDelegate>
{
    NSString *_endpoint;
    NSString *_query;
}

+ (id)requestWithSession:(id)arg1 endpoint:(id)arg2 query:(id)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSString *query; // @synthesize query=_query;
@property(readonly) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)responseBySendingRequestWithError:(id *)arg1;
- (id)_urlSessionConfiguration;
- (id)_additionalHTTPHeaders;
- (id)requestURL;
- (id)_analyticsAPIVersion;
- (id)_analyticsServiceHostname;
- (id)accountBasedSession;
- (id)initWithSession:(id)arg1 endpoint:(id)arg2 query:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

