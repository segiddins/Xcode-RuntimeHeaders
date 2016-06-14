//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDESpriteKitParticleEditor/IDEDocumentStructureProviding-Protocol.h>

@class DVTFileDataType, GTFMutableObjectDictionary, IDEWorkspaceDocument, NSArray, NSString, SKWorkspace, SKWorkspaceBundle;

@interface SKEditorDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    GTFMutableObjectDictionary *_workspaceByEditorController;
    id _lastEffectiveWorkspaceDocument;
    SKWorkspaceBundle *_bundle;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)commitChangeOfObject:(id)arg1 onKeyPath:(id)arg2 oldValue:(id)arg3 withActionName:(id)arg4 dependentKeyPaths:(id)arg5;
- (void)ensureDocumentBundle;
- (void)_setNaiveBundle;
@property(readonly, nonatomic) SKWorkspace *effectiveSKWorkspace;
@property(readonly, nonatomic) IDEWorkspaceDocument *effectiveWorkspaceDocument;
@property(readonly, nonatomic) NSArray *allWorkspaceDocuments;
- (void)unregisterWorkspaceDocumentForEditorController:(id)arg1;
- (void)registerWorkspaceDocument:(id)arg1 forEditorController:(id)arg2;
- (id)_lastActiveWorkspaceDocument;
- (BOOL)canSave;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (void)editorDocumentWillClose;
- (void)updateChangeCount:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isParticleDocument;
@property(readonly, nonatomic) BOOL isSceneDocument;
@property(readonly, nonatomic) DVTFileDataType *fileDataType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

