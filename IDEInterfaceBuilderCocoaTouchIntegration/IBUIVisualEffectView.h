//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSString;

@interface IBUIVisualEffectView : IBUIView <IBDocumentArchiving, NSCoding>
{
    long long _blurEffectStyle;
    BOOL _vibrancy;
    IBUIView *_contentView;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbArchivedDesignableContentView;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) IBUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL vibrancy; // @synthesize vibrancy=_vibrancy;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
- (void).cxx_destruct;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)instantiationKeyPathForMarshalledRelatedObject:(id)arg1;
- (void)layoutSubviews;
- (void)unarchiveVisualEffect:(id)arg1;
- (void)archiveVisualEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibShouldPropagateFramesDuringFrameDecisionForChildItem:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanChildChangeCustomClassName:(id)arg1;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibDefaultImage;
- (id)ibDesignableContentView;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (id)ibArchivedDesignableContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

