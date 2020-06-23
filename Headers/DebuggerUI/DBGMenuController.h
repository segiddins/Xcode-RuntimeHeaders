//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/IDECommandHandler-Protocol.h>
#import <DebuggerUI/IDECommandHandlerVendor-Protocol.h>

@class NSString;

@interface DBGMenuController : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isSystemAppearanceDebuggingSelector:(SEL)arg1;
+ (BOOL)_isDebugOverrideSelector:(SEL)arg1;
+ (BOOL)_isCoreAnimationDebuggingSelector:(SEL)arg1;
+ (BOOL)_isViewDebuggingSelector:(SEL)arg1;
+ (id)tabControllerForCurrentWorkspaceDocument;
+ (id)sharedInstance;
- (void)colorFormats:(id)arg1;
- (void)colorCached:(id)arg1;
- (void)colorOffscreenRenderedYellow:(id)arg1;
- (void)colorOpenGLFastPathBlue:(id)arg1;
- (void)colorImmediately:(id)arg1;
- (void)colorMisalignedImages:(id)arg1;
- (void)colorBlendedLayers:(id)arg1;
- (void)colorCopiedImages:(id)arg1;
- (void)flashUpdatedRegions:(id)arg1;
- (void)_updateSystemAppearanceOverride:(unsigned long long)arg1;
- (void)systemAppearanceIncreasedContrastDark:(id)arg1;
- (void)systemAppearanceIncreasedContrastLight:(id)arg1;
- (void)systemAppearanceDark:(id)arg1;
- (void)systemAppearanceLight:(id)arg1;
- (void)systemAppearanceAuto:(id)arg1;
- (id)_debugOverridesDebugBarContentProvider;
- (void)disableAllEnvironmentOverrides:(id)arg1;
- (void)configureEnvironmentOverrides:(id)arg1;
- (void)showResponsiveScrollingStatus:(id)arg1;
- (void)showDrawing:(id)arg1;
- (void)showAlignmentRectangles:(id)arg1;
- (void)showFrames:(id)arg1;
- (void)captureViewHierarchy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_activeDebugBarContentProviderWithClass:(Class)arg1;
- (id)_viewDebuggingAdditionUIController;
- (id)_debuggingAdditionConformingToProtocol:(id)arg1;
- (id)_coreAnimationDebuggingAddition;
- (id)_kitViewDebuggingAddition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

