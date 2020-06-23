//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderElement.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderIntentResponse, NSArray, NSString, NSUUID;

@interface IDEIntentBuilderIntentResponseCode : IDEIntentBuilderElement <DVTInvalidation, IDEIntentBuilderIssueGenerator>
{
    BOOL _success;
    BOOL _removed;
    NSUUID *_identifier;
    NSString *_name;
    NSString *_formatString;
    NSString *_formatStringID;
    NSString *_conciseFormatString;
    NSString *_conciseFormatStringID;
    IDEIntentBuilderIntentResponse *_intentResponse;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic, getter=isRemoved, setter=_setRemoved:) BOOL removed; // @synthesize removed=_removed;
@property(nonatomic, setter=_setIntentResponse:) __weak IDEIntentBuilderIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(copy, nonatomic, setter=_setConciseFormatStringID:) NSString *conciseFormatStringID; // @synthesize conciseFormatStringID=_conciseFormatStringID;
@property(copy, nonatomic) NSString *conciseFormatString; // @synthesize conciseFormatString=_conciseFormatString;
@property(copy, nonatomic, setter=_setFormatStringID:) NSString *formatStringID; // @synthesize formatStringID=_formatStringID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, getter=isSuccess) BOOL success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
- (id)init;
- (void)_registerUndoBlockForFoundCode:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *parameterNames;
@property(readonly, nonatomic, getter=isTransient) BOOL transient;
@property(readonly, nonatomic, getter=isCustom) BOOL custom;
- (id)codegen_customInitializerAvailabilityForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_availabilityForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_codeForSourceLanguage:(unsigned long long)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
