//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCPropertyDomainSpecification.h>

@class DVTMacroDefinitionTable, NSString;

@interface XCBuildStepSpecification : XCPropertyDomainSpecification
{
    NSString *_buildStepType;
    DVTMacroDefinitionTable *_buildSettings;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (void)registerSpecificationOrProxy:(id)arg1;
+ (id)buildStepsForType:(id)arg1;
- (void).cxx_destruct;
@property(copy) DVTMacroDefinitionTable *buildSettings; // @synthesize buildSettings=_buildSettings;
@property(copy) NSString *buildStepType; // @synthesize buildStepType=_buildStepType;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (id)pushOverridingBuildSettingsWithMacroExpansionScope:(id)arg1;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end
