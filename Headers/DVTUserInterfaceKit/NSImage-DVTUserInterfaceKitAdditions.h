//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (DVTUserInterfaceKitAdditions)
+ (id)_dvt_imageNameForLibraryPath:(id)arg1 isUser:(BOOL)arg2;
+ (id)dvt_cachedStackFrameIconForLibraryPath:(id)arg1 isUser:(BOOL)arg2 hasSymbols:(BOOL)arg3 withStyle:(id)arg4;
+ (id)dvt_stackFrameGenericIconWithHasSymbols:(BOOL)arg1 overrideColor:(id)arg2;
+ (id)dvt_stackFrameIconForUserCodeWithHasSymbols:(BOOL)arg1 overrideColor:(id)arg2;
+ (id)dvt_stackFrameIconForLibraryPath:(id)arg1 hasSymbols:(BOOL)arg2 overrideColor:(id)arg3;
+ (id)dvt_groupLibrarySourceIcon;
+ (id)dvt_navPluginIcon;
+ (id)dvt_incrementalFindGlyphWithStyle:(id)arg1;
+ (id)dvt_toolbarViewUtilitiesAreaButtonIcon;
+ (id)dvt_toolbarViewNavigatorAreaButtonIcon;
+ (id)dvt_recentOnImage;
+ (id)dvt_recentOffImage;
+ (id)dvt_memoryGraphDebuggerIcon;
+ (id)dvt_goToButtonIcon;
+ (id)dvt_navInstrumentsPackageIcon;
+ (id)dvt_appStoreContainerAppIcon;
+ (id)dvt_watchAppIcon;
+ (id)dvt_downloadArrowDarkIcon;
+ (id)dvt_downloadArrowIcon;
+ (id)dvt_processorUsagePointIcon;
+ (id)dvt_diskWritePointIcon;
+ (id)dvt_crashPointIcon;
+ (id)dvt_archiveIcon;
+ (id)dvt_navSubmoduleIcon;
+ (id)dvt_navModuleIcon;
+ (id)dvt_navToolIcon;
+ (id)dvt_navSDKIcon;
+ (id)dvt_navAppExtensionIcon;
+ (id)dvt_navXPCServiceIcon;
+ (id)dvt_navInAppPurchaseIcon;
+ (id)dvt_navTvOSApplicationIcon;
+ (id)dvt_navWatchOSApplicationIcon;
+ (id)dvt_navIOSApplicationIcon;
+ (id)dvt_navApplicationIcon;
+ (id)dvt_navApplicationIcon_small;
+ (id)dvt_navLibraryIcon;
+ (id)dvt_navXCFrameworkIcon;
+ (id)dvt_navFrameworkIcon;
+ (id)dvt_navPackageManifestIcon;
+ (id)dvt_navPackageRemoteIcon;
+ (id)dvt_navPackageIcon;
+ (id)dvt_navTestsFolderIcon;
+ (id)dvt_navSourcesFolderIcon;
+ (id)dvt_navGroupNoFSIcon;
+ (id)dvt_navGroupIcon;
+ (id)dvt_navTargetIcon;
+ (id)dvt_genericiOSDeviceIcon;
+ (id)dvt_iOSApplicationIcon;
+ (id)dvt_navDocumentsFolderIcon;
+ (id)dvt_questionMarkIcon;
+ (id)dvt_blankDocumentIcon;
+ (id)dvt_unknownFSObjectIcon;
+ (id)dvt_folderIcon;
+ (id)dvt_cachedIconInGroup:(id)arg1 named:(id)arg2 ofSize:(double)arg3 withAspects:(id)arg4 error:(id *)arg5;
+ (id)dvt_cachedIconInGroup:(id)arg1 named:(id)arg2 ofSize:(double)arg3;
- (id)dvt_cachedInactiveImage;
- (id)_dvt_cachedInactiveVariantWithKey:(id)arg1;
- (id)dvt_cachedInactiveAlternateImageFromTemplate;
- (id)dvt_cachedAlternateImageFromTemplate;
- (id)_dvt_deriveAlternateImageFromTemplate;
@end

