//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTMacroDefinitionConditionParameter, NSString;

@interface DVTMacroDefinitionCondition : NSObject <NSCopying>
{
    DVTMacroDefinitionConditionParameter *_parameter;
    NSString *_valuePattern;
}

+ (id)conditionWithParameterName:(id)arg1 valuePattern:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)subscriptRepresentation;
- (long long)compare:(id)arg1;
- (BOOL)evaluateInScope:(id)arg1;
- (BOOL)evaluateForParameterValues:(id)arg1;
@property(readonly) NSString *valuePattern;
@property(readonly) DVTMacroDefinitionConditionParameter *parameter;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameterName:(id)arg1 valuePattern:(id)arg2;

@end
