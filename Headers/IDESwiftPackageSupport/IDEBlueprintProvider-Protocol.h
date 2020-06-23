//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESwiftPackageSupport/DVTInvalidation-Protocol.h>
#import <IDESwiftPackageSupport/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBlueprint, IDETestableProvider;

@protocol IDEBlueprintProvider <DVTInvalidation, NSObject>
+ (NSArray *)availableSwiftVersions;
@property(nonatomic, readonly) id <IDETestableProvider> testableProvider;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) NSString *classPrefix;
@property(nonatomic, readonly) NSString *organizationName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *blueprints;

@optional
@property(nonatomic, readonly) NSArray *sourcePackageReferences;
@property(nonatomic) int buildSystemType;
@end

