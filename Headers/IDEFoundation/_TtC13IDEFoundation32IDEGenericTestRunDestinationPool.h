//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatformFamily, MISSING_TYPE, NSString;

@interface _TtC13IDEFoundation32IDEGenericTestRunDestinationPool : NSObject
{
    MISSING_TYPE *queue;
    MISSING_TYPE *allRunDestinations;
    MISSING_TYPE *availableRunDestinations;
    MISSING_TYPE *requests;
    MISSING_TYPE *deviceClaims;
    MISSING_TYPE *uuid;
    MISSING_TYPE *canVendMoreThanOneRunDestination;
    MISSING_TYPE *platformFamily;
}

- (void).cxx_destruct;
- (id)init;
- (void)deallocateRunDestination:(id)arg1;
- (id)allocateRunDestinationFor:(id)arg1;
- (BOOL)preflightWithTestRunSpecification:(id)arg1 error:(id *)arg2;
- (void)testSessionDidEnd;
- (BOOL)prepareForTestSessionWithTestingMode:(long long)arg1 error:(id *)arg2;
@property(nonatomic, readonly) NSString *displayName;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithRunDestinations:(id)arg1;
@property(nonatomic, readonly) DVTPlatformFamily *platformFamily; // @synthesize platformFamily;
@property(nonatomic) BOOL canVendMoreThanOneRunDestination; // @synthesize canVendMoreThanOneRunDestination;

@end

