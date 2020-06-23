//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DebugHierarchyCrawlerOptions, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface DebugHierarchyRequest : NSObject
{
    NSString *_identifier;
    NSString *_name;
    float _initiatorVersion;
    long long _priority;
    long long _status;
    NSArray *_actions;
    long long _objectDiscovery;
    DebugHierarchyCrawlerOptions *_crawlerOptions;
    double _timeout;
    NSDictionary *_payload;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completion;
    NSArray *_logs;
    NSString *_statusMessageActivityPhrase;
    BOOL _wantsUserFacingStatusUpdates;
    NSDate *_executionStartDate;
    NSDate *_executionEndDate;
    NSData *_serializedCompatibilitySupportRepresentation;
    BOOL _needsCompatibilityConversion;
    BOOL _compressDuringTransport;
}

+ (id)requestWithDiscoveryType:(long long)arg1 actions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)requestWithDictionary:(id)arg1;
+ (id)_requestWithV1RequestDictionary:(id)arg1;
+ (id)_compatibleRequestWithDictionary:(id)arg1;
+ (id)requestWithBase64Data:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property BOOL compressDuringTransport; // @synthesize compressDuringTransport=_compressDuringTransport;
@property BOOL needsCompatibilityConversion; // @synthesize needsCompatibilityConversion=_needsCompatibilityConversion;
@property(retain) NSData *serializedCompatibilitySupportRepresentation; // @synthesize serializedCompatibilitySupportRepresentation=_serializedCompatibilitySupportRepresentation;
@property(retain) NSDate *executionEndDate; // @synthesize executionEndDate=_executionEndDate;
@property(retain) NSDate *executionStartDate; // @synthesize executionStartDate=_executionStartDate;
@property BOOL wantsUserFacingStatusUpdates; // @synthesize wantsUserFacingStatusUpdates=_wantsUserFacingStatusUpdates;
@property(retain) NSString *statusMessageActivityPhrase; // @synthesize statusMessageActivityPhrase=_statusMessageActivityPhrase;
@property(retain) NSArray *logs; // @synthesize logs=_logs;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property double timeout; // @synthesize timeout=_timeout;
@property(readonly) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain) DebugHierarchyCrawlerOptions *crawlerOptions; // @synthesize crawlerOptions=_crawlerOptions;
@property(readonly) long long objectDiscovery; // @synthesize objectDiscovery=_objectDiscovery;
@property(retain) NSArray *actions; // @synthesize actions=_actions;
@property long long status; // @synthesize status=_status;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property float initiatorVersion; // @synthesize initiatorVersion=_initiatorVersion;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)humanReadableStatusMessage;
- (void)addLogEntry:(id)arg1;
- (id)dictionaryRepresentation;
- (void)cancel;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithWithDiscoveryType:(long long)arg1 actions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)formattedResponseDataForRawRequestResultData:(id)arg1;

@end

