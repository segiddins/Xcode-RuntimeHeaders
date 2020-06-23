//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderElement.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderGroup, NSString, NSUUID;

@interface IDEIntentBuilderGroupItem : IDEIntentBuilderElement <DVTInvalidation, IDEIntentBuilderIssueGenerator>
{
    BOOL _transient;
    BOOL _internal;
    BOOL _removed;
    NSString *_originalName;
    NSString *_originalGeneratedName;
    NSString *_classPrefix;
    NSUUID *_identifier;
    NSString *_name;
    NSString *_generatedName;
    IDEIntentBuilderGroup *_group;
    NSString *__originalClassPrefix;
}

+ (void)initialize;
@property(nonatomic, getter=isRemoved, setter=_setRemoved:) BOOL removed; // @synthesize removed=_removed;
@property(copy, nonatomic, setter=_setOriginalClassPrefix:) NSString *_originalClassPrefix; // @synthesize _originalClassPrefix=__originalClassPrefix;
@property(nonatomic, getter=isInternal, setter=_setInternal:) BOOL internal; // @synthesize internal=_internal;
@property(nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property(nonatomic, setter=_setGroup:) __weak IDEIntentBuilderGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *generatedName; // @synthesize generatedName=_generatedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic, setter=_setOriginalGeneratedName:) NSString *_originalGeneratedName; // @synthesize _originalGeneratedName;
@property(copy, nonatomic, setter=_setOriginalName:) NSString *_originalName; // @synthesize _originalName;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
- (void)_registerUndoBlockForFoundItem:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSString *className;
@property(readonly, copy, nonatomic) NSString *classPrefix; // @synthesize classPrefix=_classPrefix;
- (id)init;
- (id)codegen_implementationFileSuffixForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_implementationFilePrefixForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_headerFileSuffixForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_headerFilePrefixForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_contentsForFileOfType:(unsigned long long)arg1;
- (BOOL)codegen_generatesFileOfType:(unsigned long long)arg1;
- (id)codegen_availabilityForSourceLanguage:(unsigned long long)arg1;
- (BOOL)codegen_isInternal;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

