//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DBGSwiftTypeDescriptor : NSObject
{
    NSString *_module;
    NSString *_name;
    NSString *_label;
    NSString *_modifier;
    NSArray *_genericParameters;
    NSArray *_descendants;
}

+ (id)_preprocessedName:(id)arg1;
+ (id)_nameByRemovingThrowingDeclaration:(id)arg1;
+ (id)_nameByMarkingUnknownContexts:(id)arg1;
+ (BOOL)_isUnknownContext:(id)arg1;
+ (id)_parseTextInName:(id)arg1 currentCharacterIndex:(long long *)arg2;
+ (id)_parseListOfTypesInName:(id)arg1 currentCharacterIndex:(long long *)arg2;
+ (id)_parseTypeName:(id)arg1 currentCharacterIndex:(long long *)arg2;
+ (id)typeDescriptorWithDemangledName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *descendants; // @synthesize descendants=_descendants;
@property(copy, nonatomic) NSArray *genericParameters; // @synthesize genericParameters=_genericParameters;
@property(copy, nonatomic) NSString *modifier; // @synthesize modifier=_modifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic, getter=isWildcard) BOOL wildcard;
- (double)_matchRatioWithSubtypes:(id)arg1 andSubtypes:(id)arg2 maxPossibleValue:(double)arg3;
- (double)_matchRatioWithType:(id)arg1 maxPossibleValue:(double)arg2;
- (double)matchRatioWithType:(id)arg1;
- (id)_initWithName:(id)arg1 genericParameters:(id)arg2 descendants:(id)arg3;
- (id)_initWithDescendants:(id)arg1;

@end
