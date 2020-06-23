//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DVTServicesType : NSObject
{
    NSString *_name;
    Class _resultClass;
    Class _expectedInputClass;
    NSArray *_properties;
}

+ (id)_defaultInputClassName;
+ (id)typeWithName:(id)arg1;
+ (id)types;
+ (id)_orderedTypeNameToTypeMapByLoadingIfNeeded;
@property(readonly, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) Class expectedInputClass; // @synthesize expectedInputClass=_expectedInputClass;
@property(readonly, nonatomic) Class resultClass; // @synthesize resultClass=_resultClass;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)_deserializePropertiesIntoTypeInstance:(id)arg1 serviceValueDictionary:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)_makeInstanceForDeserialization;
- (id)_deserialize:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)_primitiveValueByTransformingServiceValue:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)deserializeMultiple:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)deserialize:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)_primitiveServiceValue:(id)arg1 isEqualToDeserializedValue:(id)arg2;
- (id)_bogusValueForMismatchedTypeTesting;
- (id)description;
- (void)_loadPropertiesFromExtension:(id)arg1 context:(id)arg2;
- (id)initWithExtension:(id)arg1 context:(id)arg2;

@end

