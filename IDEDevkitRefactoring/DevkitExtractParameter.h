//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DevkitType, NSString;

@interface DevkitExtractParameter : NSObject
{
    NSString *_name;
    NSString *_keyword;
    DevkitType *_type;
    id _backingDeclaration;
    BOOL _isPassByReference;
    BOOL _isUninitialized;
    BOOL _isReturnedValue;
    BOOL _isReturnedValueNeedsInitializer;
    BOOL _isSelf;
    long long _parameterBehavior;
    int _isDefinedBehavior;
}

- (void).cxx_destruct;
- (BOOL)isPartiallyDefinedInFunction;
- (void)setIsPartiallyDefinedInFunction:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf;
- (id)description;
- (void)setNeedsInitializer;
- (BOOL)needsInitializer;
- (void)setIsReturnedValue;
- (BOOL)isReturnedValue;
- (BOOL)hasInOutParameterBehavior;
- (BOOL)hasOutParameterBehavior;
- (BOOL)hasInParameterBehavior;
- (BOOL)hasNoParameterBehavior;
- (void)setHasNoParameterBehavior;
- (void)setHasOutParameterBehavior;
- (void)setHasInParameterBehavior;
- (BOOL)isUninitialized;
- (void)setIsUninitialized;
- (id)backingDeclaration;
- (BOOL)isPassByReference;
- (void)setType:(id)arg1;
- (id)type;
- (void)setName:(id)arg1;
- (id)name;
- (void)setKeyword:(id)arg1;
- (id)keyword;
- (id)copy;
- (id)initWithName:(id)arg1 type:(id)arg2 backingDeclaration:(id)arg3 isPassByReference:(BOOL)arg4;

@end

