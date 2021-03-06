//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTLocale, DVTStackBacktrace, IDEBuildParameters, IDEContainer, IDEWorkspace, LOCHandler, NSArray, NSDictionary, NSSet, NSString, NSUUID;
@protocol IDELocalizedContainer;

@interface IDELocalizationHandler : NSObject <DVTInvalidation>
{
    BOOL _didCalculateItsRulesPath;
    DVTFilePath *_itsRulesPath;
    DVTFilePath *_projectDirectoryFilePath;
    IDEWorkspace *_workspace;
    IDEBuildParameters *_buildParameters;
    IDEContainer<IDELocalizedContainer> *_container;
    NSDictionary *_options;
    DVTLocale *_sourceLocale;
    NSArray *_testActivities;
    NSUUID *_sessionID;
    NSString *_temporaryDirectory;
    LOCHandler *_underlyingHandler;
    NSArray *_contentToLocalize;
    NSArray *_nonLocalizedContentForReference;
    NSDictionary *_infoPlistFilesByBlueprint;
    NSDictionary *_blueprintNamesByBlueprint;
    NSDictionary *_blueprintIsUnitTestsByBlueprint;
    NSDictionary *_localizedStringMacroNamesByBlueprint;
    NSDictionary *_localizedStringSwiftUISupportByBlueprint;
    NSDictionary *_sourceCodeFilesByBlueprint;
    NSDictionary *_sourceCodeStringsFilesByBlueprint;
    NSDictionary *_localizableResourceFilesByBlueprint;
    NSDictionary *_blueprintsByLocalizableResourceFile;
    NSDictionary *_nonLocalizableResourceFilesByBlueprint;
    NSDictionary *_blueprintsByNonLocalizableResourceFile;
    NSDictionary *_supportedPlatformsByBlueprint;
}

+ (BOOL)shouldPreserveTemporaryFiles;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSDictionary *supportedPlatformsByBlueprint; // @synthesize supportedPlatformsByBlueprint=_supportedPlatformsByBlueprint;
@property(copy) NSDictionary *blueprintsByNonLocalizableResourceFile; // @synthesize blueprintsByNonLocalizableResourceFile=_blueprintsByNonLocalizableResourceFile;
@property(copy) NSDictionary *nonLocalizableResourceFilesByBlueprint; // @synthesize nonLocalizableResourceFilesByBlueprint=_nonLocalizableResourceFilesByBlueprint;
@property(copy) NSDictionary *blueprintsByLocalizableResourceFile; // @synthesize blueprintsByLocalizableResourceFile=_blueprintsByLocalizableResourceFile;
@property(copy) NSDictionary *localizableResourceFilesByBlueprint; // @synthesize localizableResourceFilesByBlueprint=_localizableResourceFilesByBlueprint;
@property(copy) NSDictionary *sourceCodeStringsFilesByBlueprint; // @synthesize sourceCodeStringsFilesByBlueprint=_sourceCodeStringsFilesByBlueprint;
@property(copy) NSDictionary *sourceCodeFilesByBlueprint; // @synthesize sourceCodeFilesByBlueprint=_sourceCodeFilesByBlueprint;
@property(copy) NSDictionary *localizedStringSwiftUISupportByBlueprint; // @synthesize localizedStringSwiftUISupportByBlueprint=_localizedStringSwiftUISupportByBlueprint;
@property(copy) NSDictionary *localizedStringMacroNamesByBlueprint; // @synthesize localizedStringMacroNamesByBlueprint=_localizedStringMacroNamesByBlueprint;
@property(copy) NSDictionary *blueprintIsUnitTestsByBlueprint; // @synthesize blueprintIsUnitTestsByBlueprint=_blueprintIsUnitTestsByBlueprint;
@property(copy) NSDictionary *blueprintNamesByBlueprint; // @synthesize blueprintNamesByBlueprint=_blueprintNamesByBlueprint;
@property(copy) NSDictionary *infoPlistFilesByBlueprint; // @synthesize infoPlistFilesByBlueprint=_infoPlistFilesByBlueprint;
@property(copy) NSArray *nonLocalizedContentForReference; // @synthesize nonLocalizedContentForReference=_nonLocalizedContentForReference;
@property(copy) NSArray *contentToLocalize; // @synthesize contentToLocalize=_contentToLocalize;
@property(readonly) LOCHandler *underlyingHandler; // @synthesize underlyingHandler=_underlyingHandler;
@property(readonly, copy) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property(readonly, copy) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy) NSArray *testActivities; // @synthesize testActivities=_testActivities;
@property(copy) DVTLocale *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(copy) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL didCalculateItsRulesPath; // @synthesize didCalculateItsRulesPath=_didCalculateItsRulesPath;
@property(readonly, copy) DVTFilePath *itsRulesPath; // @synthesize itsRulesPath=_itsRulesPath;
- (BOOL)hasWorkspaceSupport;
@property(readonly, copy) NSSet *blueprintProvidersForWorkspace;
- (void)cleanUpTemporaryFiles;
- (void)locateLocalizableSourceAndResourceFiles;
- (BOOL)isSettingsBundle:(id)arg1 withLocalizableFilePaths:(id *)arg2 forLocalization:(id)arg3;
- (BOOL)isAssetCatalogWithPath:(id)arg1 localizableAssetsPath:(id *)arg2;
- (BOOL)isLocalizablePath:(id)arg1 forBaseOrLproj:(id)arg2;
- (id)expectedPathForGeneratedStringsFileName:(id)arg1 inBlueprintWithIdentifier:(id)arg2;
- (void)processSourceFiles;
- (id)accumulateNonLocalizedContentForLocale:(id)arg1;
- (void)accumulateNonLocalizedContent;
- (void)accumulateContentToLocalize;
@property(readonly, copy) DVTFilePath *projectDirectoryFilePath; // @synthesize projectDirectoryFilePath=_projectDirectoryFilePath;
- (void)prepareForUseWithContentFileType:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 buildParameters:(id)arg2 container:(id)arg3 options:(id)arg4 testActivities:(id)arg5 sourceLocale:(id)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

