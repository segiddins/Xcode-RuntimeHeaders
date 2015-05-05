//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBArgumentsContainer.h>

@class NSArray, NSMutableArray, NSString;

@interface IBImageCatalogToolArgumentsContainer : IBArgumentsContainer
{
    NSMutableArray *_targetDevices;
    BOOL _printVersion;
    BOOL _includeDebugOutput;
    BOOL _printContents;
    BOOL _printErrorMessages;
    BOOL _printWarningMessages;
    BOOL _printNoticeMessages;
    BOOL _printMessageCategoryInfo;
    BOOL _compressPNGs;
    BOOL _forceImagesOnWrite;
    NSString *_platformName;
    NSString *_compilationOutputPath;
    NSString *_partialInfoPlistOutputPath;
    NSString *_appIconName;
    NSString *_launchImageName;
    NSString *_minimumDeploymentTarget;
    NSString *_exportDependencyInfoPath;
    NSString *_commonAssetRepositoryFileName;
}

@property(copy) NSArray *targetDevices; // @synthesize targetDevices=_targetDevices;
@property(copy) NSString *commonAssetRepositoryFileName; // @synthesize commonAssetRepositoryFileName=_commonAssetRepositoryFileName;
@property(copy) NSString *exportDependencyInfoPath; // @synthesize exportDependencyInfoPath=_exportDependencyInfoPath;
@property(copy) NSString *minimumDeploymentTarget; // @synthesize minimumDeploymentTarget=_minimumDeploymentTarget;
@property(copy) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy) NSString *appIconName; // @synthesize appIconName=_appIconName;
@property(copy) NSString *partialInfoPlistOutputPath; // @synthesize partialInfoPlistOutputPath=_partialInfoPlistOutputPath;
@property(copy) NSString *compilationOutputPath; // @synthesize compilationOutputPath=_compilationOutputPath;
@property(copy) NSString *platformName; // @synthesize platformName=_platformName;
@property BOOL forceImagesOnWrite; // @synthesize forceImagesOnWrite=_forceImagesOnWrite;
@property BOOL compressPNGs; // @synthesize compressPNGs=_compressPNGs;
@property BOOL printMessageCategoryInfo; // @synthesize printMessageCategoryInfo=_printMessageCategoryInfo;
@property BOOL printNoticeMessages; // @synthesize printNoticeMessages=_printNoticeMessages;
@property BOOL printWarningMessages; // @synthesize printWarningMessages=_printWarningMessages;
@property BOOL printErrorMessages; // @synthesize printErrorMessages=_printErrorMessages;
@property BOOL printContents; // @synthesize printContents=_printContents;
@property BOOL includeDebugOutput; // @synthesize includeDebugOutput=_includeDebugOutput;
@property BOOL printVersion; // @synthesize printVersion=_printVersion;
- (void).cxx_destruct;
- (BOOL)supportsMultipleInputDocuments;
- (long long)outputFormatArgumentCode;
- (id)objectOptionsThatRequireInputDocuments;
- (id)booleanOptionsThatRequireInputDocuments;
- (id)optionIndex;
- (id)init;

@end

