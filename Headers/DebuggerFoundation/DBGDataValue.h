//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerFoundation/DBGLazyObservableDictionaryDelegate-Protocol.h>
#import <DebuggerFoundation/DVTInvalidation-Protocol.h>
#import <DebuggerFoundation/IDEDataValue-Protocol.h>

@class DBGDataType, DBGDataValueFormat, DBGDataValueSummaryFormatter, DBGLazyObservableDictionary, DVTObservingToken, DVTStackBacktrace, IDEStackFrame, NSArray, NSAttributedString, NSMutableSet, NSString;

@interface DBGDataValue : NSObject <DBGLazyObservableDictionaryDelegate, IDEDataValue, DVTInvalidation>
{
    DBGDataType *_previousDynamicType;
    NSMutableSet *_requestedChildrenByName;
    BOOL _needToUpdateSummaryFormatter;
    BOOL _formattedSummaryHasAnyChanges;
    NSString *_logicalValue;
    NSAttributedString *_unescapedAttributedFormattedSummary;
    NSAttributedString *_escapedAttributedFormattedSummary;
    DVTObservingToken *_valueObserver;
    DVTObservingToken *_inScopeObserver;
    DVTObservingToken *_childValuesObservationToken;
    BOOL _containsFunctionExpressions;
    int _valueValidity;
    IDEStackFrame *_stackFrame;
    NSString *address;
    NSString *pointeeAddress;
    DBGDataType *_dynamicType;
    DBGDataValueSummaryFormatter *_summaryFormatter;
    DBGLazyObservableDictionary *_lazyChildValuesByName;
}

+ (void)initialize;
+ (id)summaryUnavailableAttributedString;
+ (id)keyPathsForValuesAffectingFormattedSummary;
+ (id)keyPathsForValuesAffectingTypeHasChanged;
+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingLogicalValueHasChanged;
+ (id)keyPathsForValuesAffectingLogicalValue;
+ (id)kvoChildPathForValuePath:(id)arg1;
@property(retain, nonatomic) DBGLazyObservableDictionary *lazyChildValuesByName; // @synthesize lazyChildValuesByName=_lazyChildValuesByName;
@property(retain, nonatomic) DBGDataValueSummaryFormatter *summaryFormatter; // @synthesize summaryFormatter=_summaryFormatter;
@property BOOL containsFunctionExpressions; // @synthesize containsFunctionExpressions=_containsFunctionExpressions;
@property int valueValidity; // @synthesize valueValidity=_valueValidity;
@property(readonly) DBGDataType *dynamicType; // @synthesize dynamicType=_dynamicType;
@property(readonly, copy) NSString *pointeeAddress; // @synthesize pointeeAddress;
@property(readonly, copy) NSString *address; // @synthesize address;
@property(readonly) IDEStackFrame *stackFrame; // @synthesize stackFrame=_stackFrame;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) BOOL isMemoryFault;
- (id)_contentDescription;
- (id)_contentDescriptionWithChildValuesAtLevel:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_paddingForLevel:(unsigned long long)arg1;
- (void)loadedFullSummary:(CDUnknownBlockType)arg1;
- (void)loadedSummary:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *fullSummary;
- (id)primitiveChildValues;
- (void)_handleChildValuesChanged;
- (id)valueForKey:(id)arg1 forLazyDictionary:(id)arg2;
- (id)_childWithName:(id)arg1;
- (void)classNameHierarchy:(CDUnknownBlockType)arg1;
- (void)ensureAllDisplayablePropertiesAreLoaded:(CDUnknownBlockType)arg1;
@property(readonly) BOOL mightRespondToSelectors;
@property(readonly) BOOL representsNullClassTypedef;
@property(readonly) BOOL representsNullObjectPointer;
@property(readonly) BOOL representsNilObjectiveCObject;
- (void)watch;
- (void)childWithName:(id)arg1 foundChild:(CDUnknownBlockType)arg2;
@property(readonly) BOOL childValuesCountValid;
- (void)loadedChildValues:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *childValues;
@property(readonly) BOOL hasChildValues;
@property(readonly) BOOL inScope;
- (void)_updateSummaryFormatterIfNecessary;
- (void)_updateSummaryFormatter;
- (BOOL)wantsToProvideSummary;
- (id)_attributedStringByEscapeNewlines:(id)arg1;
@property(readonly) BOOL itemDescriptionHasChanged;
@property(readonly, copy) NSString *itemDescription;
- (id)primitiveFormattedSummary;
@property(readonly) NSAttributedString *formattedSummary;
- (void)_summaryFormatterInvalidated:(id)arg1;
@property(readonly) BOOL typeHasChanged;
@property(readonly, copy) NSString *type;
@property(readonly) BOOL valueHasChanged;
@property(readonly) BOOL isValueEditable;
@property(copy) NSString *value;
@property(readonly, copy) NSString *primitiveLogicalValue;
@property(readonly) BOOL logicalValueHasChanged;
- (BOOL)hasSummaryFormatter;
- (BOOL)isNilPointer;
- (BOOL)isPointer;
@property(readonly, copy) NSString *logicalValue;
@property(readonly, copy) NSString *name;
@property(readonly) DBGDataValue *parent;
@property(readonly) BOOL dynamicTypeHasChanged;
@property(readonly) BOOL summaryHasChanged;
@property(retain) DBGDataValueFormat *format;
@property(readonly, copy) NSString *summary;
- (void)primitiveSetDynamicType:(id)arg1;
- (id)simpleTypeName;
- (void)setDynamicType:(id)arg1;
@property(readonly) DBGDataType *staticType;
@property(readonly, copy) NSString *expressionPath;
@property(readonly) NSMutableSet *requestedChildrenByName;
- (id)initWithStackFrame:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

