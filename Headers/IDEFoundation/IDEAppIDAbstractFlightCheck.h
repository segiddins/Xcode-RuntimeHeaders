//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEFlightChecking-Protocol.h>

@class DVTStackBacktrace, NSError, NSString;
@protocol IDEAppIDFeatureCoordination;

@interface IDEAppIDAbstractFlightCheck : NSObject <IDEFlightChecking>
{
    BOOL _failed;
    NSObject<IDEAppIDFeatureCoordination> *_coordinator;
    NSError *_resolutionError;
}

+ (id)keyPathsForValuesAffectingAutomaticallyResolvable;
+ (id)keyPathsForValuesAffectingRequiresAccountAndTeamSelection;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *resolutionError; // @synthesize resolutionError=_resolutionError;
@property(nonatomic) BOOL failed; // @synthesize failed=_failed;
@property(retain, nonatomic) NSObject<IDEAppIDFeatureCoordination> *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, copy, nonatomic) NSString *resolvingTitle;
@property(readonly, copy, nonatomic) NSString *pastTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)validate;
- (void)unresolve;
- (void)resolveWithContext:(id)arg1;
- (void)revert;
@property(readonly, nonatomic, getter=isAutomaticallyResolvable) BOOL automaticallyResolvable;
@property(readonly, nonatomic, getter=isLongRunning) BOOL longRunning;
@property(readonly, nonatomic) BOOL requiresAccountAndTeamSelection;
@property(readonly, nonatomic) int status;
- (void)_updateState;
- (id)expectedFeaturesWithError:(id *)arg1;
- (void)_setUpObservations;
- (id)initWithAppIDFeatureCoordinator:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

