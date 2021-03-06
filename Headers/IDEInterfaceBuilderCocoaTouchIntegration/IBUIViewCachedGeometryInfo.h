//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBUIViewCachedGeometryInfo : NSObject
{
    NSString *_cachedKeyPath;
    NSString *_requestedKeyPath;
    long long _processingRequestPhase;
}

- (void).cxx_destruct;
@property(nonatomic) long long processingRequestPhase; // @synthesize processingRequestPhase=_processingRequestPhase;
@property(readonly) NSString *requestedKeyPath; // @synthesize requestedKeyPath=_requestedKeyPath;
@property(readonly) NSString *cachedKeyPath; // @synthesize cachedKeyPath=_cachedKeyPath;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)initWithCachedKeyPath:(id)arg1 andRequestedKeyPath:(id)arg2;
- (id)init;

@end

