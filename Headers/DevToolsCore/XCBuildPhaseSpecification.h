//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCPropertyDomainSpecification.h>

@class NSArray, NSDictionary, NSString;

@interface XCBuildPhaseSpecification : XCPropertyDomainSpecification
{
    NSString *_name;
    NSArray *_buildRules;
    NSDictionary *_buildSettings;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (void).cxx_destruct;
- (id)buildSettings;
- (id)buildRules;
- (id)name;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

