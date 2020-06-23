//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTServices/DVTServicesRequest.h>

@class NSDictionary, NSString, NSURL;
@protocol DVTPortalSerialization;

@interface DVTPortalRequest : DVTServicesRequest
{
    NSString *_requestID;
    id <DVTPortalSerialization> _payloadSerializer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <DVTPortalSerialization> payloadSerializer; // @synthesize payloadSerializer=_payloadSerializer;
@property(readonly, nonatomic) NSURL *portalBaseURL;
- (id)serializedPayload:(id *)arg1;
- (id)sendRequestAndReceiveResponse:(id *)arg1;
- (id)_sendRequestAndReceiveResponseWithPayload:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long expectedHTTPStatusCode;
- (BOOL)_shouldRetryRequest:(id)arg1 response:(id)arg2;
- (id)_sendURLRequestWaitForResponse:(id)arg1 URLResponse:(id *)arg2 error:(id *)arg3;
- (id)_serverCertificateCredential;
- (id)_URLRequestWithPayloadData:(id)arg1 session:(id)arg2;
- (id)_standardPayloadItemsWithSession:(id)arg1;
@property(readonly, nonatomic) Class responseClass;
@property(readonly, nonatomic) NSDictionary *additionalHTTPHeaders;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) NSString *httpMethod;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSString *portalProtocolVersion;
- (id)_serviceClientID;

@end

