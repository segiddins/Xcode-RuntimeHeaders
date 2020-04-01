//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerFoundation/IDEDebugOverrideDelegate-Protocol.h>

@class IDEDebugOverrideValue, NSArray, NSHashTable, NSString;

@interface IDEDebugOverride : NSObject <IDEDebugOverrideDelegate>
{
    BOOL _enabled;
    NSString *_identifier;
    NSString *_category;
    NSString *_displayName;
    double _positionPriority;
    NSString *_supportedTargetKit;
    Class _customViewControllerClass;
    NSString *_expression;
    NSString *_impliedOverrideID;
    IDEDebugOverride *_implyingOverride;
    NSArray *_validValues;
    IDEDebugOverrideValue *_currentValue;
    NSHashTable *_delegates;
    IDEDebugOverrideValue *_userSelectedValue;
}

+ (id)overrideWithExtension:(id)arg1 targetPlatformIdentifier:(id)arg2 targetOSVersion:(id)arg3;
+ (BOOL)_supportedTargetsOfExtension:(id)arg1 matchTargetPlatformIdentifier:(id)arg2 andTargetOSVersion:(id)arg3;
+ (id)loadOverridesMatchingPredicate:(id)arg1 withDelegate:(id)arg2 targetPlatformIdentifier:(id)arg3 targetOSVersion:(id)arg4;
@property(retain, nonatomic) IDEDebugOverrideValue *userSelectedValue; // @synthesize userSelectedValue=_userSelectedValue;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) IDEDebugOverrideValue *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly) NSArray *validValues; // @synthesize validValues=_validValues;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak IDEDebugOverride *implyingOverride; // @synthesize implyingOverride=_implyingOverride;
@property(readonly) NSString *impliedOverrideID; // @synthesize impliedOverrideID=_impliedOverrideID;
@property(readonly) NSString *expression; // @synthesize expression=_expression;
@property(readonly) Class customViewControllerClass; // @synthesize customViewControllerClass=_customViewControllerClass;
@property(readonly) NSString *supportedTargetKit; // @synthesize supportedTargetKit=_supportedTargetKit;
@property(readonly) double positionPriority; // @synthesize positionPriority=_positionPriority;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *category; // @synthesize category=_category;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)debugOverrideDidUpdate:(id)arg1;
- (void)_updateWithNewImplyingDebugOverrideValue;
@property(readonly) BOOL isImplied;
- (void)updateStateWithDictionary:(id)arg1;
- (id)restorableStatePlistRepresentation;
- (void)_setCurrentValue:(id)arg1 shouldUpdateUserValue:(BOOL)arg2;
- (void)_delegates_debugOverrideDidUpdate;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)expressionWithSubstitutedValue:(id)arg1;
- (id)expressionForEffectiveValue;
- (id)effectiveValue;
- (id)effectiveValidValues;
- (id)initWithExtension:(id)arg1 targetPlatformIdentifier:(id)arg2 targetOSVersion:(id)arg3;

@end

