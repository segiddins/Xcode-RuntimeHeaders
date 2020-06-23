//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFilePathFieldCellDelegate-Protocol.h>
#import <IDEKit/IDEBuildFolderLocationSheetControllerDelegate-Protocol.h>

@class DVTFilePathField, IDEXcodeSelectHelper, NSArrayController, NSAttributedString, NSPopUpButton, NSString, NSTextField;

@interface IDELocationsPrefsPaneController : IDEViewController <DVTFilePathFieldCellDelegate, IDEBuildFolderLocationSheetControllerDelegate>
{
    NSString *_customDerivedDataLocation;
    NSString *_customDistributionArchivesLocation;
    int _derivedDataLocationStyle;
    int _distributionArchivesLocationStyle;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    IDEXcodeSelectHelper *_xcodeSelectHelper;
    DVTFilePathField *_derivedDataFilePathField;
    NSTextField *_derivedDataRelativePathField;
    DVTFilePathField *_distributionArchivesFilePathField;
    DVTFilePathField *_derivedDataPathLabel;
    DVTFilePathField *_distributionArchivesPathLabel;
    NSPopUpButton *_commandLineToolsPopUp;
    NSArrayController *_commandLineToolsArrayController;
    NSTextField *_derivedDataRelativePathLabel;
}

+ (id)keyPathsForValuesAffectingCustomWorkspaceRelativeDerivedDataLocation;
+ (id)keyPathsForValuesAffectingUseCustomDistributionArchivesLocation;
+ (id)keyPathsForValuesAffectingUseCustomDerivedDataLocation;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(nonatomic) int distributionArchivesLocationStyle; // @synthesize distributionArchivesLocationStyle=_distributionArchivesLocationStyle;
@property(nonatomic) int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
@property(copy, nonatomic) NSString *customDistributionArchivesLocation; // @synthesize customDistributionArchivesLocation=_customDistributionArchivesLocation;
@property(copy, nonatomic) NSString *customDerivedDataLocation; // @synthesize customDerivedDataLocation=_customDerivedDataLocation;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)validateCustomDistributionArchivesLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomDerivedDataLocation:(id *)arg1 error:(id *)arg2;
- (void)buildFolderLocationSheetDidEndWithBuildLocationStyle:(int)arg1 sharedBuildFolderName:(id)arg2 customBuildLocationType:(int)arg3 customBuildProductsPath:(id)arg4 customBuildIntermediatesPath:(id)arg5;
- (void)changeCommandLineTools:(id)arg1;
- (void)showBuildFolderLocationSheet:(id)arg1;
@property(readonly) NSString *defaultDistributionArchivesLocation;
@property(readonly) NSString *defaultDerivedDataLocation;
@property(readonly) NSAttributedString *customWorkspaceRelativeDerivedDataLocation;
@property(readonly) BOOL useCustomDistributionArchivesLocation;
@property(readonly) BOOL useCustomDerivedDataLocation;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_updateDistributionArchivesPathLabelForSelectedLocationStyle;
- (void)_updateDerivedDataPathLabelForSelectedLocationStyle;
- (void)_updatePathLabelsForSelectedLocationStyles;
- (void)_updateDistributionArchivesCustomLocationFieldForPathType;
- (void)_updateDerivedDataCustomLocationFieldForPathType;
- (void)_updateCustomLocationFieldsForPathTypes;
- (void)_saveLocationsPreferences;
- (id)_xcodeSelectPopupSortDescriptors;
- (void)_windowDidResignMain:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

