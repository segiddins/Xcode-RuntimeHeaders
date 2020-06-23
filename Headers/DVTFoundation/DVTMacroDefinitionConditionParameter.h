//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface DVTMacroDefinitionConditionParameter : NSObject
{
    NSString *_name;
    unsigned long long _precedence;
    NSString *_displayName;
    NSAttributedString *_displayDesc;
}

+ (id)defaultConditionParameters;
+ (id)registeredConditionParameters;
+ (id)conditionParameterNamed:(id)arg1;
+ (void)registerConditionParameterNamed:(id)arg1 precedence:(unsigned long long)arg2 displayName:(id)arg3 displayDescription:(id)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
@property(readonly) NSAttributedString *displayDescription;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long precedence;
@property(readonly) NSString *name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 precedence:(unsigned long long)arg2 displayName:(id)arg3 displayDescription:(id)arg4;

@end

