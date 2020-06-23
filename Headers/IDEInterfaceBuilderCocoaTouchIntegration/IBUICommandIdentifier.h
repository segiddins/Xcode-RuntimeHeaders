//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchTargetRuntime, NSString;

@interface IBUICommandIdentifier : NSObject <NSCopying, NSCoding>
{
    IBCocoaTouchTargetRuntime *_targetRuntime;
    NSString *_actionName;
    id _propertyList;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)identifierWithActionName:(id)arg1 propertyList:(id)arg2 targetRuntime:(id)arg3;
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void).cxx_destruct;
- (id)description;
- (id)ibLocalAttributeKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (unsigned long long)hash;
- (BOOL)isEqualToCommandIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActionName:(id)arg1 propertyList:(id)arg2 targetRuntime:(id)arg3;

@end

