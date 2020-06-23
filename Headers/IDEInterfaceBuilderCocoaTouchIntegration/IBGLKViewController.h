//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBGLKView, NSString;

@interface IBGLKViewController : IBUIViewController <IBDocumentArchiving>
{
    BOOL _pauseOnWillResignActive;
    BOOL _resumeOnDidBecomeActive;
    long long _preferredFramesPerSecond;
}

+ (id)ibViewPasteboardType;
+ (Class)ibViewClass;
@property(nonatomic) BOOL resumeOnDidBecomeActive; // @synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive;
@property(nonatomic) BOOL pauseOnWillResignActive; // @synthesize pauseOnWillResignActive=_pauseOnWillResignActive;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(retain) IBGLKView *glkView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibEstablishViewOutletsInDocument:(id)arg1;
- (id)ibExplanatoryTextForEditor;
- (id)ibImageForOwnedScene;
- (id)ibTypeNameForDefaultLabel;
- (id)ibTitleForEditor;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

