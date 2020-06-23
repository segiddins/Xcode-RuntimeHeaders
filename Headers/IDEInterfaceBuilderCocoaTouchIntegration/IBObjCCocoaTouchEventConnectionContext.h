//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBObjCActionSourceCodeConnectionContext.h>

@class NSDictionary;

@interface IBObjCCocoaTouchEventConnectionContext : IBObjCActionSourceCodeConnectionContext
{
    long long _argumentType;
    unsigned long long _eventType;
}

+ (id)eventType;
+ (id)stringType;
+ (id)floatType;
+ (id)integerType;
+ (id)boolType;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long argumentType; // @synthesize argumentType=_argumentType;
- (id)sourceCodeInsertionOptions;
- (id)sourceCodeInsertionArguments;
- (id)_effectiveNameForFirstArgument:(id)arg1;
- (id)counterpartsForInsertion;
- (void)setConnectionPrototypeToComplete:(id)arg1;
- (Class)userConfigurableOptionsViewControllerClass;
- (id)labelForCompletingConnectionPrototypeForInsertion;
@property(readonly) NSDictionary *applicableArgumentTypes;
- (long long)effectiveArgumentType;
- (BOOL)userCanConfigureType;
- (unsigned long long)methodKind;
- (id)init;

@end

