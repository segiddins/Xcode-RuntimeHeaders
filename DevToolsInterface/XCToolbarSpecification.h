//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class NSMutableDictionary;

@interface XCToolbarSpecification : XCSpecification
{
    NSMutableDictionary *_toolbarItemDefinitions;
    NSMutableDictionary *_toolbarConfigurations;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (void)unregisterFactory:(id)arg1;
+ (void)registerFactory:(id)arg1;
+ (void)initialize;
- (id)toolbarItem:(id)arg1;
- (id)toolbarItem:(id)arg1 forProjectDocument:(id)arg2 proxiedToToolbar:(id)arg3;
- (id)toolbarItem:(id)arg1 forProjectDocument:(id)arg2;
- (id)defaultItemsForConfiguration:(id)arg1;
- (id)allowedItemsForConfiguration:(id)arg1;
- (id)toolbarConfigurations;
- (id)toolbarItemDefinitions;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

