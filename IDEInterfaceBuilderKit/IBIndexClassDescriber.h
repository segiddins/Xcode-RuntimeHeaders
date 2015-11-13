//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IBExternallySynchronizedIndexClassDescriber, IDEWorkspace, NSString;
@protocol OS_dispatch_queue;

@interface IBIndexClassDescriber : NSObject <DVTInvalidation>
{
    IBExternallySynchronizedIndexClassDescriber *_synchronizedThrottle;
    DVTObservingToken *_workspaceIndexChangedToken;
    DVTNotificationToken *_indexContentChangedToken;
    DVTNotificationToken *_indexStateChangedToken;
    double _lastRequest;
    double _lastTimeout;
    NSObject<OS_dispatch_queue> *_queue;
    IDEWorkspace *_workspace;
}

+ (void)initialize;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)relationSymbolsInClassNamed:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 forClassNamed:(id)arg3;
- (id)subclassNamesOfClassNamed:(id)arg1;
- (id)firstClassSymbolForClassNamed:(id)arg1;
- (id)firstDocumentLocationForClassNamed:(id)arg1;
- (id)firstDocumentLocationForRelaltion:(id)arg1 ofType:(long long)arg2;
- (id)performThrottledIndexQuery:(CDUnknownBlockType)arg1;
- (long long)makeIndexCallUsingBlock:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

