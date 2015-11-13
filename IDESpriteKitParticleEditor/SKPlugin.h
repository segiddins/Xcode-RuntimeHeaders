//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDESpriteKitParticleEditor/IDEInitialization-Protocol.h>

@class DVTObservingToken, GTFMutableObjectDictionary, NSHashTable;

@interface SKPlugin : NSObject <IDEInitialization>
{
    NSHashTable *_workspacesProcessed;
    GTFMutableObjectDictionary *_workspaceToResourceManager;
    DVTObservingToken *_workspaceDocumentsKVOToken;
}

+ (id)emitterDocumentType;
+ (id)actionDocumentType;
+ (id)sceneDocumentType;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_workspaceContainsSKResources:(id)arg1;
- (void)_removeResourceManagerForWorkspace:(id)arg1;
- (id)_createResourceManagerForWorkspace:(id)arg1;
- (void)_refreshResourceManagers;
- (id)resourceManagerForWorkspace:(id)arg1;
- (id)init;

@end

