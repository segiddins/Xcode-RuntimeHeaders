//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, IBDocument, NSString;

@interface IBSimulatedMetricsInferrer : NSObject <DVTInvalidation>
{
    DVTDelayedInvocation *_delayedInvocation;
    IBDocument *_document;
}

+ (void)initialize;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)rebuildInferredMetrics;
- (void)immediatelyInferMetrics;
- (void)immediatelyInferMetricsIfNeeded;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)documentWillCloseUndoGroup;
- (void)documentDidChangeDefaultSimulatedMetricsContainer;
- (void)invalidateMetrics;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

