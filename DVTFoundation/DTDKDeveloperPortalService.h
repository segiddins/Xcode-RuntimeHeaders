//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTDeveloperAccountSession, DVTDeveloperPortalResponseWrapper, DVTLogAspect, DVTPortalOperationToken, NSDictionary, NSError, NSMutableDictionary, NSMutableURLRequest;

@interface DTDKDeveloperPortalService : NSObject
{
    DVTDeveloperPortalResponseWrapper *_responseWrapper;
    _Bool _ignoreSession;
    _Bool _success;
    int _remainingLoginAttempts;
    DVTLogAspect *_logAspect;
    DVTDeveloperAccountSession *_session;
    DVTPortalOperationToken *_token;
    NSMutableURLRequest *_request;
    NSMutableDictionary *_requestDictionary;
    CDUnknownBlockType _callback;
    NSDictionary *_responseDictionary;
    NSError *_error;
}

+ (id)_service:(id)arg1 requestPropertyList:(id)arg2;
+ (id)_createRequestDictionary;
+ (id)guaranteedComprehensiveResponseKeys;
+ (id)_serviceVersion;
+ (id)alloc;
@property _Bool success; // @synthesize success=_success;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(copy) NSMutableURLRequest *request; // @synthesize request=_request;
@property int remainingLoginAttempts; // @synthesize remainingLoginAttempts=_remainingLoginAttempts;
@property(retain) DVTPortalOperationToken *token; // @synthesize token=_token;
@property _Bool ignoreSession; // @synthesize ignoreSession=_ignoreSession;
@property(retain) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
@property(retain) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (void)_success;
- (void)_failure:(id)arg1;
- (void)_callCallback;
- (void)executeWithCallback:(CDUnknownBlockType)arg1;
- (id)_errorInfo;
- (BOOL)_handlePortalResultCode:(long long)arg1;
- (void)_internalParseResponse:(id)arg1 data:(id)arg2;
- (void)_parseResponse:(id)arg1 data:(id)arg2;
- (void)_internalExecute;
@property(readonly) DVTDeveloperAccount *account;
@property(readonly, nonatomic) DVTDeveloperPortalResponseWrapper *responseWrapper;
@property(readonly) long long resultCode;
- (id)uuid;
@property(readonly) _Bool synchronous;
- (id)init;
- (id)_userAgent;
- (id)_clientID;

@end

