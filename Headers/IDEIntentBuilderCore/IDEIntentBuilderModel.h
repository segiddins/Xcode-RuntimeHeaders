//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderElement.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEIntentBuilderDocument, NSArray, NSString, NSUndoManager;
@protocol IDEIntentBuilderModelDataSource;

@interface IDEIntentBuilderModel : IDEIntentBuilderElement <DVTInvalidation, IDEIntentBuilderIssueGenerator>
{
    DVTObservingToken *_modelObservationToken;
    BOOL _systemIntentDefinition;
    BOOL _readonly;
    BOOL _loaded;
    BOOL _manualCodegen;
    BOOL __systemModel;
    id <IDEIntentBuilderModelDataSource> _dataSource;
    NSArray *_groups;
    NSUndoManager *_undoManager;
    NSString *_classPrefix;
    unsigned long long _version;
    NSString *_namespace;
    unsigned long long _sourceLanguage;
    IDEIntentBuilderDocument *_document;
    unsigned long long __visibility;
    NSString *__moduleName;
}

+ (void)initialize;
+ (id)modelFromData:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
+ (id)modelForFileDataType:(id)arg1 fromData:(id)arg2 readonly:(BOOL)arg3 error:(id *)arg4;
+ (id)systemIntentsModel;
+ (void)_registerModelClass:(Class)arg1 forFileDataType:(id)arg2;
+ (id)_modelClassRegistry;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setModuleName:) NSString *_moduleName; // @synthesize _moduleName=__moduleName;
@property(nonatomic, setter=_setVisibility:) unsigned long long _visibility; // @synthesize _visibility=__visibility;
@property(nonatomic, getter=_isSystemModel, setter=_setSystemModel:) BOOL _systemModel; // @synthesize _systemModel=__systemModel;
@property(nonatomic, setter=_setDocument:) __weak IDEIntentBuilderDocument *document; // @synthesize document=_document;
@property(nonatomic) BOOL manualCodegen; // @synthesize manualCodegen=_manualCodegen;
@property(nonatomic) unsigned long long sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property(nonatomic, getter=isSystemIntentDefinition, setter=_setSystemIntentDefinition:) BOOL systemIntentDefinition; // @synthesize systemIntentDefinition=_systemIntentDefinition;
@property(copy, nonatomic, setter=_setNamespace:) NSString *namespace; // @synthesize namespace=_namespace;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *classPrefix; // @synthesize classPrefix=_classPrefix;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) __weak id <IDEIntentBuilderModelDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (void)primitiveInvalidate;
- (id)init;
@property(readonly, nonatomic) BOOL storesToolsAndSystemInformation;
- (void)updateModelForBuild;
- (id)dataWithError:(id *)arg1;
- (id)groupWithIdentifier:(id)arg1;
- (void)addGroup:(id)arg1;
- (id)_latestVersionAsString;
- (id)_versionAsString;
- (unsigned long long)_versionWithString:(id)arg1;
- (void)_clearTransientGroupItems;
- (Class)_groupItemClassForGroup:(id)arg1;
- (id)_buildOutputDataWithError:(id *)arg1;
- (void)_setSourceLanguageFromString:(id)arg1;
- (id)_sourceLanguageAsString;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

