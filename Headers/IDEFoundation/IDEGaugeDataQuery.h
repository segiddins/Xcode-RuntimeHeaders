//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEGaugeDataProviderService, IDEGaugeDataQueryCoordinator, NSSet, NSString;

@interface IDEGaugeDataQuery : NSObject <DVTInvalidation>
{
    NSString *_requiredAttribute;
    BOOL _isSuspended;
    BOOL _useProxiedDevice;
    IDEGaugeDataQueryCoordinator *_queryCoordinator;
    IDEGaugeDataProviderService *_service;
    NSSet *_observedAttributes;
    CDUnknownBlockType _resultDictHandler;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL useProxiedDevice; // @synthesize useProxiedDevice=_useProxiedDevice;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(copy, nonatomic) CDUnknownBlockType resultDictHandler; // @synthesize resultDictHandler=_resultDictHandler;
@property(copy, nonatomic) NSSet *observedAttributes; // @synthesize observedAttributes=_observedAttributes;
@property(retain) IDEGaugeDataProviderService *service; // @synthesize service=_service;
@property(retain, nonatomic) IDEGaugeDataQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
- (void)handleResultDict:(id)arg1;
- (void)setObservedAttributes:(id)arg1 requiredAttribute:(id)arg2;
- (void)primitiveInvalidate;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2 useProxiedDevice:(BOOL)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

