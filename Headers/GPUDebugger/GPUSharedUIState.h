//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface GPUSharedUIState : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_stateTable;
    NSString *_identifier;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setState:(id)arg1 ForKey:(id)arg2;
- (id)stateForKey:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifer:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

