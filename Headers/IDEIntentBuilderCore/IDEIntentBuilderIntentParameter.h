//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderProperty.h>

@class NSArray, NSString;

@interface IDEIntentBuilderIntentParameter : IDEIntentBuilderProperty
{
    BOOL _supportsDynamicEnumeration;
    BOOL _customDisambiguation;
    BOOL _supportsResolution;
    NSArray *_confirmationReasons;
    NSString *_resolutionResultClassName;
    NSArray *_promptDialogs;
    NSArray *_unsupportedReasons;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons; // @synthesize unsupportedReasons=_unsupportedReasons;
@property(copy, nonatomic, setter=_setPromptDialogs:) NSArray *promptDialogs; // @synthesize promptDialogs=_promptDialogs;
@property(copy, nonatomic) NSString *resolutionResultClassName; // @synthesize resolutionResultClassName=_resolutionResultClassName;
@property(copy, nonatomic, setter=_setConfirmationReasons:) NSArray *confirmationReasons; // @synthesize confirmationReasons=_confirmationReasons;
@property(nonatomic) BOOL supportsResolution; // @synthesize supportsResolution=_supportsResolution;
- (void)_updateDefaultUnsupportedReasons;
- (void)_addPromptDialog:(id)arg1;
@property(readonly, nonatomic) BOOL _typeSupportsNeedsValueResolution;
- (BOOL)_requiresDynamicEnumeration;
- (void)updateRelationshipWithDictionary:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)keyPrefix;
- (id)generateIssues;
@property(readonly, nonatomic) BOOL _shouldGenerateResolutionIssues;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
@property(nonatomic) BOOL supportsDynamicEnumeration; // @synthesize supportsDynamicEnumeration=_supportsDynamicEnumeration;
@property(nonatomic) BOOL customDisambiguation; // @synthesize customDisambiguation=_customDisambiguation;
@property(readonly, nonatomic) BOOL hasCustomResolutionResult;
- (id)confirmationReasonWithCode:(id)arg1;
- (id)confirmationReasonWithIdentifier:(id)arg1;
- (id)unsupportedReasonWithCode:(id)arg1;
- (id)unsupportedReasonWithIdentifier:(id)arg1;
- (id)promptDialogWithType:(long long)arg1;
- (id)promptDialogWithIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setUserFacing:(BOOL)arg1;
@property(readonly, nonatomic, getter=isUserFacing) BOOL userFacing;
- (id)availableTokensForPromptDialogType:(long long)arg1;
@property(readonly, nonatomic) NSArray *availableTokensForUnsupportedReasons;
- (void)removeConfirmationReason:(id)arg1;
- (void)addConfirmationReason:(id)arg1;
- (void)removeUnsupportedReason:(id)arg1;
- (void)addUnsupportedReason:(id)arg1;
- (void)removePromptDialog:(id)arg1;
- (void)addPromptDialog:(id)arg1;
- (id)codegen_forwardDeclarationsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_dynamicEnumerationAvailabilityForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_resolutionAvailabilityForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_resolutionResultImplementationForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_resolutionResultDeclarationForSourceLanguage:(unsigned long long)arg1;

@end

