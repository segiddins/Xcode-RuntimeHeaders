//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

#import "NSCopying.h"

@class DVTFilePath, IDEContainerItem, IDEGroup, IDETemplate, IDEWorkspaceDocument, NSArray;

@interface IDETemplateInstantiationContext : IDEAssistantContext <NSCopying>
{
    BOOL _alwaysReplaceFiles;
    BOOL _skipFileChooser;
    IDETemplate *_documentTemplate;
    DVTFilePath *_documentFilePath;
    NSArray *_instantiatedItems;
    IDEContainerItem *_primaryInstantiatedItem;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_destinationBuildables;
    NSArray *_templateSections;
    IDEWorkspaceDocument *_createdDocument;
}

@property BOOL skipFileChooser; // @synthesize skipFileChooser=_skipFileChooser;
@property BOOL alwaysReplaceFiles; // @synthesize alwaysReplaceFiles=_alwaysReplaceFiles;
@property(retain) IDEWorkspaceDocument *createdDocument; // @synthesize createdDocument=_createdDocument;
@property(copy) NSArray *templateSections; // @synthesize templateSections=_templateSections;
@property(copy) NSArray *destinationBuildables; // @synthesize destinationBuildables=_destinationBuildables;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(retain) IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property(retain) IDEContainerItem *primaryInstantiatedItem; // @synthesize primaryInstantiatedItem=_primaryInstantiatedItem;
@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
@property(retain) DVTFilePath *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(retain, nonatomic) IDETemplate *documentTemplate; // @synthesize documentTemplate=_documentTemplate;
- (void).cxx_destruct;
- (void)_asyncFinishTemplateInstantiationAfterCreatingWorkspaceDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)asyncFinishTemplateInstantiationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL alwaysShowProjectNavigator;
@property(readonly, copy) NSArray *targetWorkspaces;
- (id)destinationBlueprintProvider;
- (void)loadAvailableTemplatesOfKind:(id)arg1 navigableItemCoordinator:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

