//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTServices/DVTServicesRequest.h>

@class NSDictionary, NSString;

@interface DVTPortalRequest : DVTServicesRequest
{
    NSString *_requestID;
    NSString *_action;
    NSDictionary *_payload;
}

@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)sendRequestAndReceiveResponse:(id *)arg1;
- (id)_sendURLRequestWaitForResponse:(id)arg1 URLResponse:(id *)arg2 error:(id *)arg3;
- (id)_URLRequestWithPayloadData:(id)arg1 sessionID:(id)arg2;
- (id)_requestURL;
- (id)_portalHostname;
- (BOOL)_usesCertAuth;
- (id)_payloadWithStandardItems:(id)arg1;
- (id)_standardPayloadItemsWithSessionID:(id)arg1;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)_protocolVersion;
- (id)_serviceClientID;
- (id)initWithPortalSession:(id)arg1 action:(id)arg2 payload:(id)arg3;

@end

