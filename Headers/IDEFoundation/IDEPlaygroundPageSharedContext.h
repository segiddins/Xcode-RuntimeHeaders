//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommonSharedContext.h>

@class DVTFilePath, IDEPlaygroundSharedContext;

@interface IDEPlaygroundPageSharedContext : IDEPlaygroundCommonSharedContext
{
    IDEPlaygroundSharedContext *_playgroundContext;
}

+ (id)keyPathsForValuesAffectingSwiftContentsFilePath;
+ (id)keyPathsForValuesAffectingImplicit;
+ (Class)contextDeserializerClass;
+ (Class)contextSerializerClass;
+ (id)filePathExtension;
+ (id)UTI;
@property(readonly, nonatomic) __weak IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (void).cxx_destruct;
- (BOOL)unregisterReferencingContainer:(id)arg1;
- (BOOL)registerReferencingContainer:(id)arg1;
@property(readonly, nonatomic) DVTFilePath *swiftContentsFilePath;
- (id)_targetTripleForAuxiliarySource;
- (id)_sdkForAuxiliarySource;
- (id)_platformForFrameworkSearchPaths;
- (id)frameworkSearchPaths;
- (id)sourcesDirectoryPath;
- (id)resourcesDirectoryPath;
- (id)name;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) DVTFilePath *timelineFilePath; // @dynamic timelineFilePath;

@end

