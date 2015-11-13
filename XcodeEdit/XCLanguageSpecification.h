//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class TSPropertyListDictionary, XCSourceScanner;

@interface XCLanguageSpecification : XCSpecification
{
    long long _uniqueId;
    BOOL _includeInMenu;
    Class _scannerClass;
    XCSourceScanner *_scanner;
    TSPropertyListDictionary *_syntaxRules;
}

+ (id)_identifierForUniqueId:(long long)arg1;
+ (long long)_uniqIdForIdentifier:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (id)availableKeywords;
- (id)lexerKeywords;
- (id)syntaxRules;
- (id)scanner;
- (BOOL)includeInMenu;
- (long long)uniqueId;
- (id)name;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

