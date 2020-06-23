//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderElement.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/NSCopying-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderIntent, NSArray, NSString, NSUUID;

@interface IDEIntentBuilderIntentParameterCombination : IDEIntentBuilderElement <NSCopying, DVTInvalidation>
{
    BOOL _supportsBackgroundExecution;
    BOOL _managed;
    BOOL _linked;
    BOOL _updatesLinkedParameterCombinations;
    BOOL _isRemoved;
    NSUUID *_identifier;
    NSArray *_parameters;
    NSString *_title;
    NSString *_titleID;
    NSString *_subtitle;
    NSString *_subtitleID;
    IDEIntentBuilderIntent *_intent;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingParametersString;
+ (id)keyPathsForValuesAffectingSummary;
+ (id)stateParameterCombinationWithParameter:(id)arg1;
@property(nonatomic, setter=_setRemoved:) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic, setter=_setIntent:) __weak IDEIntentBuilderIntent *intent; // @synthesize intent=_intent;
@property(nonatomic) BOOL updatesLinkedParameterCombinations; // @synthesize updatesLinkedParameterCombinations=_updatesLinkedParameterCombinations;
@property(nonatomic, getter=isLinked) BOOL linked; // @synthesize linked=_linked;
@property(nonatomic, getter=isManaged) BOOL managed; // @synthesize managed=_managed;
@property(copy, nonatomic, setter=_setSubtitleID:) NSString *subtitleID; // @synthesize subtitleID=_subtitleID;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic, setter=_setTitleID:) NSString *titleID; // @synthesize titleID=_titleID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL supportsBackgroundExecution; // @synthesize supportsBackgroundExecution=_supportsBackgroundExecution;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_registerUndoBlockForFoundIntentParameterCombination:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isDuplicate) BOOL duplicate;
@property(readonly, nonatomic) NSString *parametersString;
@property(nonatomic, getter=isPrimary) BOOL primary;
@property(readonly, copy, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSArray *availableTokens;
- (void)unlinkManagedParameterCombinationIfPossible;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

