//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBUIAccessibilityConfiguration;

@interface IBUIMarshallableAccessibilityConfiguration : NSObject
{
    IBUIAccessibilityConfiguration *_configuration;
    NSObject *_object;
}

+ (void)registerMarshallingRecordHandlers;
@property(retain) NSObject *object; // @synthesize object=_object;
@property(retain) IBUIAccessibilityConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)initWithObject:(id)arg1 andConfiguration:(id)arg2;

@end

