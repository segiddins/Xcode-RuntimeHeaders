//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiPhoneSupport/IDEiOSInfoPlistIconAdapter.h>

@class IDEiOSInfoPlistIconAdapter_UILaunchImageFile, IDEiOSInfoPlistIconAdapter_UILaunchImages;

@interface IDEiOSInfoPlistIconAdapter_UILaunchImagesUILaunchImageFileHybrid : IDEiOSInfoPlistIconAdapter
{
    IDEiOSInfoPlistIconAdapter_UILaunchImageFile *_legacyAdapter;
    IDEiOSInfoPlistIconAdapter_UILaunchImages *_modernAdapter;
}

+ (int)adapterType;
- (void).cxx_destruct;
- (void)deleteImagesInPlist;
- (id)imageBaseNamesForRow:(id)arg1;
- (void)addImageBaseName:(id)arg1 forFilePath:(id)arg2 forRow:(id)arg3;
- (BOOL)_disregardLegacyAdapterForModernRows;
- (BOOL)_rowIsModern:(id)arg1;
- (BOOL)requiresBaseImageNameForRow:(id)arg1;
- (id)initWithInfoPlistCoordinator:(id)arg1 deviceModifier:(id)arg2;

@end

