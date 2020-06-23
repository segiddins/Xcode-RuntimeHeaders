//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface LOCXcloc : NSObject
{
    BOOL _attemptedFetchingManifest;
    NSMutableDictionary *_cachedManifest;
    NSString *_rootPath;
}

+ (id)toolInfoDictionaryForID:(id)arg1 name:(id)arg2 version:(id)arg3 buildNumber:(id)arg4;
+ (id)_errorInfoForFailedXclocCreationAtPath:(id)arg1 underlyingError:(id)arg2;
+ (id)createAtPath:(id)arg1 sourceLocale:(id)arg2 targetLocale:(id)arg3 toolInfo:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void)_loadManifestIfNecessary;
- (id)_debugStringForJsonKeyPath:(id)arg1;
- (id)_manifestContainerForKeyPath:(id)arg1 forSettingChild:(BOOL)arg2;
- (id)_manifestStringValueForKeyPath:(id)arg1;
- (void)_setCachedManifestStringValue:(id)arg1 forKeyPath:(id)arg2;
- (id)_serializedManifest:(id)arg1 error:(id *)arg2;
- (id)_manifestJsonForVersion:(id)arg1 sourceLocale:(id)arg2 targetLocale:(id)arg3 toolInfo:(id)arg4;
- (id)manifestDataWithError:(id *)arg1;
- (BOOL)writeManifestAtomically:(BOOL)arg1 WithError:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *manifestPath;
- (struct _LOCSemanticVersionNumber)_componentsForVersionString:(id)arg1;
- (BOOL)_version:(struct _LOCSemanticVersionNumber)arg1 isNewerThan:(struct _LOCSemanticVersionNumber)arg2;
@property(readonly, nonatomic) long long version;
- (id)xliffDocumentWithError:(id *)arg1;
- (id)locateXliffWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *preferredXliffPath;
- (id)sourceContentPathForLocalizedContentsPath:(id)arg1;
@property(copy, nonatomic) NSString *toolBuildNumber;
@property(copy, nonatomic) NSString *toolVersion;
@property(copy, nonatomic) NSString *toolName;
@property(copy, nonatomic) NSString *toolID;
@property(copy, nonatomic) NSString *targetLocale;
@property(copy, nonatomic) NSString *sourceLocale;
@property(readonly, copy, nonatomic) NSString *notesPath;
@property(readonly, copy, nonatomic) NSString *localizedContentsPath;
@property(readonly, copy, nonatomic) NSString *sourceContentsPath;
- (id)initWithPath:(id)arg1;

@end

