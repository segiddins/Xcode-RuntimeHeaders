//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIColor, NSString;

@interface IBSCNView : IBUIView <IBDocumentArchiving>
{
    BOOL _jitteringEnabled;
    BOOL _playing;
    BOOL _loops;
    BOOL _autoenablesDefaultLighting;
    BOOL _allowsCameraControl;
    BOOL _ibWantsMultisampling;
    int _ibPreferredRenderingAPI;
    IBUIColor *_backgroundColor;
    NSString *_ibSceneName;
}

+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) int ibPreferredRenderingAPI; // @synthesize ibPreferredRenderingAPI=_ibPreferredRenderingAPI;
@property(nonatomic) BOOL ibWantsMultisampling; // @synthesize ibWantsMultisampling=_ibWantsMultisampling;
@property(nonatomic) BOOL allowsCameraControl; // @synthesize allowsCameraControl=_allowsCameraControl;
@property(copy, nonatomic) NSString *ibSceneName; // @synthesize ibSceneName=_ibSceneName;
@property(nonatomic) BOOL autoenablesDefaultLighting; // @synthesize autoenablesDefaultLighting=_autoenablesDefaultLighting;
@property(nonatomic) BOOL loops; // @synthesize loops=_loops;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL jitteringEnabled; // @synthesize jitteringEnabled=_jitteringEnabled;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (BOOL)prefersCachedImageBasedDrawing;
- (BOOL)ibSizesToFillViewControllers;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibInspectorShouldShowRenderingAPI;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

