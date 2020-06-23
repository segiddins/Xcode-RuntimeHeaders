//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTObservingToken, DVTStackBacktrace, NSArray, NSMutableSet, NSString, _TtC13IDEFoundation26SigningEditorConfiguration, _TtC13IDEFoundation33SigningEditorProvisionableManager;
@protocol IDEProvisioningSettingsSigningEditorViewControllersManagerSource;

@interface IDEProvisioningSettingsSigningEditorViewControllersManager : NSObject <DVTInvalidation>
{
    id <IDEProvisioningSettingsSigningEditorViewControllersManagerSource> _source;
    _TtC13IDEFoundation26SigningEditorConfiguration *_configuration;
    NSArray *_provisioningSettingsSigningEditorViewControllers;
    _TtC13IDEFoundation33SigningEditorProvisionableManager *_signingEditorProvisionableManager;
    DVTObservingToken *_provisionableObserver;
    DVTObservingToken *_provisionableManagerProviderFinishedLoadingObserver;
    DVTObservingToken *_provisioningStyleDataSourceFinishedLoadingObserver;
    DVTObservingToken *_provisioningSelectionDataSourcesObserver;
    NSMutableSet *_controllersToInvalidate;
    DVTDelayedInvocation *_delayedInvocation;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTDelayedInvocation *delayedInvocation; // @synthesize delayedInvocation=_delayedInvocation;
@property(retain, nonatomic) NSMutableSet *controllersToInvalidate; // @synthesize controllersToInvalidate=_controllersToInvalidate;
@property(retain, nonatomic) DVTObservingToken *provisioningSelectionDataSourcesObserver; // @synthesize provisioningSelectionDataSourcesObserver=_provisioningSelectionDataSourcesObserver;
@property(retain, nonatomic) DVTObservingToken *provisioningStyleDataSourceFinishedLoadingObserver; // @synthesize provisioningStyleDataSourceFinishedLoadingObserver=_provisioningStyleDataSourceFinishedLoadingObserver;
@property(retain, nonatomic) DVTObservingToken *provisionableManagerProviderFinishedLoadingObserver; // @synthesize provisionableManagerProviderFinishedLoadingObserver=_provisionableManagerProviderFinishedLoadingObserver;
@property(retain, nonatomic) DVTObservingToken *provisionableObserver; // @synthesize provisionableObserver=_provisionableObserver;
@property(retain, nonatomic) _TtC13IDEFoundation33SigningEditorProvisionableManager *signingEditorProvisionableManager; // @synthesize signingEditorProvisionableManager=_signingEditorProvisionableManager;
@property(retain, nonatomic) NSArray *provisioningSettingsSigningEditorViewControllers; // @synthesize provisioningSettingsSigningEditorViewControllers=_provisioningSettingsSigningEditorViewControllers;
@property(copy, nonatomic) _TtC13IDEFoundation26SigningEditorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) id <IDEProvisioningSettingsSigningEditorViewControllersManagerSource> source; // @synthesize source=_source;
- (void)primitiveInvalidate;
- (void)startObservations;
- (void)refresh;
- (id)initWithSource:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
