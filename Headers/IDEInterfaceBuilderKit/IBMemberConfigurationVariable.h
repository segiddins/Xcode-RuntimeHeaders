//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class IBMemberConfigurationVariableValueSpecification, NSDictionary, NSSet, NSString;

@interface IBMemberConfigurationVariable : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_valuesToSpecifications;
    NSString *_variableIdentifier;
    NSString *_succinctTitle;
    NSString *_verboseTitle;
    NSString *_abbreviation;
    NSString *_unspecifiedValueTitle;
    double _precedence;
    NSSet *_legalValues;
    IBMemberConfigurationVariableValueSpecification *_unspecifiedValueSpecification;
}

+ (id)variableWithIdentifier:(id)arg1;
+ (id)registerVariableWithIdentifier:(id)arg1 precedence:(double)arg2 verboseTitle:(id)arg3 succinctTitle:(id)arg4 abbreviation:(id)arg5 valueSpecifications:(id)arg6 unspecifiedValueSpecification:(id)arg7;
- (void).cxx_destruct;
@property(readonly) IBMemberConfigurationVariableValueSpecification *unspecifiedValueSpecification; // @synthesize unspecifiedValueSpecification=_unspecifiedValueSpecification;
@property(readonly) NSSet *legalValues; // @synthesize legalValues=_legalValues;
@property(readonly) double precedence; // @synthesize precedence=_precedence;
@property(readonly) NSString *unspecifiedValueTitle; // @synthesize unspecifiedValueTitle=_unspecifiedValueTitle;
@property(readonly) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(readonly) NSString *verboseTitle; // @synthesize verboseTitle=_verboseTitle;
@property(readonly) NSString *succinctTitle; // @synthesize succinctTitle=_succinctTitle;
@property(readonly) NSString *variableIdentifier; // @synthesize variableIdentifier=_variableIdentifier;
- (id)specificationForValue:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareIdentifier:(id)arg1;
- (long long)comparePrecedence:(id)arg1;
- (void)addValueSpecification:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 precedence:(double)arg2 verboseTitle:(id)arg3 succinctTitle:(id)arg4 abbreviation:(id)arg5 valueSpecifications:(id)arg6 unspecifiedValueSpecification:(id)arg7;

@end

