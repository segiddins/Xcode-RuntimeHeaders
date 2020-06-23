//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDEProvisioningSettingsSigningEditorViewControllersManagerSource-Protocol.h>
#import <Xcode3UI/IDESigningEditorCapabilityEditingItemChangeExistenceProtocol-Protocol.h>
#import <Xcode3UI/IDESigningEditorCapabilityItemEditingConsolidatedContextDelegatingSourceProvider-Protocol.h>
#import <Xcode3UI/IDESigningEditorConfigurationManagerProviderProtocol-Protocol.h>
#import <Xcode3UI/Xcode3SourceListItemEditor-Protocol.h>

@class DVTObservingToken, DVTSourceExpression, NSArray, NSString, Xcode3ProjectEditor, Xcode3TargetConsolidatedCapabilitiesContextSource, _TtC13IDEFoundation31ConsolidatedCapabilitiesContext, _TtC6IDEKit27SigningEditorViewController;
@protocol IDEBlueprint, IDEProvisionable, IDESigningEditorCapabilityItemEditingConsolidatedContextSource, IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate, IDESigningEditorConfigurationManagerProtocol, IDESigningEditorProvisionableManagerProvider;

@interface Xcode3SigningEditor : IDEViewController <Xcode3SourceListItemEditor, IDEProvisioningSettingsSigningEditorViewControllersManagerSource, IDESigningEditorCapabilityItemEditingConsolidatedContextDelegatingSourceProvider, IDESigningEditorCapabilityEditingItemChangeExistenceProtocol, IDESigningEditorConfigurationManagerProviderProtocol>
{
    Xcode3ProjectEditor *_projectEditor;
    id <IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate> _capabilityItemEditingConsolidatedContextSourceProviderDelegate;
    id <IDEBlueprint> _inspectedBlueprint;
    id <IDESigningEditorCapabilityItemEditingConsolidatedContextSource> _source;
    _TtC6IDEKit27SigningEditorViewController *_signingEditorViewController;
    DVTObservingToken *_inspectedBlueprintObservation;
    DVTObservingToken *_signingEditorConfigurationManagerObservation;
    Xcode3TargetConsolidatedCapabilitiesContextSource *_consolidatedCapabilitiesContextSource;
    _TtC13IDEFoundation31ConsolidatedCapabilitiesContext *_consolidatedCapabilitiesContext;
    id <IDEBlueprint> _lastInspectedBlueprint;
}

+ (id)keyPathsForValuesAffectingSigningEditorConfigurationManager;
+ (id)keyPathsForValuesAffectingProvisionableManagerProvider;
+ (id)keyPathsForValuesAffectingProvisionable;
+ (id)localizedSourceListItemEditorName;
+ (BOOL)canInspectBlueprint:(id)arg1;
@property(retain, nonatomic) id <IDEBlueprint> lastInspectedBlueprint; // @synthesize lastInspectedBlueprint=_lastInspectedBlueprint;
@property(retain, nonatomic) _TtC13IDEFoundation31ConsolidatedCapabilitiesContext *consolidatedCapabilitiesContext; // @synthesize consolidatedCapabilitiesContext=_consolidatedCapabilitiesContext;
@property(retain, nonatomic) Xcode3TargetConsolidatedCapabilitiesContextSource *consolidatedCapabilitiesContextSource; // @synthesize consolidatedCapabilitiesContextSource=_consolidatedCapabilitiesContextSource;
@property(retain, nonatomic) DVTObservingToken *signingEditorConfigurationManagerObservation; // @synthesize signingEditorConfigurationManagerObservation=_signingEditorConfigurationManagerObservation;
@property(retain, nonatomic) DVTObservingToken *inspectedBlueprintObservation; // @synthesize inspectedBlueprintObservation=_inspectedBlueprintObservation;
@property(retain, nonatomic) _TtC6IDEKit27SigningEditorViewController *signingEditorViewController; // @synthesize signingEditorViewController=_signingEditorViewController;
@property(readonly, nonatomic) id <IDESigningEditorCapabilityItemEditingConsolidatedContextSource> source; // @synthesize source=_source;
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemEditingConsolidatedContextSourceProviderDelegate> capabilityItemEditingConsolidatedContextSourceProviderDelegate; // @synthesize capabilityItemEditingConsolidatedContextSourceProviderDelegate=_capabilityItemEditingConsolidatedContextSourceProviderDelegate;
@property(retain, nonatomic) id <IDEBlueprint> inspectedBlueprint; // @synthesize inspectedBlueprint=_inspectedBlueprint;
@property(retain) Xcode3ProjectEditor *projectEditor; // @synthesize projectEditor=_projectEditor;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addCapabilityItemWithIdentifiers:(id)arg1;
@property(readonly, nonatomic) id <IDESigningEditorConfigurationManagerProtocol> signingEditorConfigurationManager;
@property(readonly) id <IDESigningEditorProvisionableManagerProvider> provisionableManagerProvider;
@property(readonly) id <IDEProvisionable> provisionable;
- (void)updateSource;
- (void)viewDidLoad;

// Remaining properties
@property(readonly) struct CGRect currentSelectionFrame;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inspectedBlueprints;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(readonly) Class superclass;

@end

