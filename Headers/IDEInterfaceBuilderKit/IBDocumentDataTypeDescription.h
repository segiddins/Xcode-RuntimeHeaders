//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractFileDataTypeDescription.h>

@class IBPlatform, IBTargetRuntime, NSSet, NSString;

@interface IBDocumentDataTypeDescription : IBAbstractFileDataTypeDescription
{
    BOOL _writable;
    NSString *_platformID;
    NSString *_targetRuntimeID;
    NSString *_archiveContentFileName;
    Class _documentClass;
    NSSet *_archiveTypes;
    NSString *_fileType;
    Class _foreignContentImporter;
}

+ (BOOL)platform:(id)arg1 supportsFileType:(id)arg2;
+ (id)allTypeDescriptions;
@property(readonly) Class foreignContentImporter; // @synthesize foreignContentImporter=_foreignContentImporter;
@property(readonly) NSString *fileType; // @synthesize fileType=_fileType;
@property(readonly) NSSet *archiveTypes; // @synthesize archiveTypes=_archiveTypes;
@property(readonly) Class documentClass; // @synthesize documentClass=_documentClass;
@property(readonly) NSString *archiveContentFileName; // @synthesize archiveContentFileName=_archiveContentFileName;
- (void).cxx_destruct;
- (id)archiveContentFilePathForBasePath:(id)arg1;
- (long long)matchingScoreForMetadataAtPath:(id)arg1 bundleContents:(id)arg2;
- (id)description;
- (BOOL)isWritable;
@property(readonly) IBTargetRuntime *bestGuessTargetRuntime;
@property(readonly) IBPlatform *platform;
- (id)initWithExtension:(id)arg1;

@end

