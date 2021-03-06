//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/DVTInvalidation-Protocol.h>
#import <DevToolsCore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBlueprint, IDETestableProvider;

@protocol IDEBlueprintProvider <DVTInvalidation, NSObject>
+ (NSArray *)availableSwiftVersions;
@property(readonly) id <IDETestableProvider> testableProvider;
@property(readonly, copy) NSString *classPrefix;
@property(readonly, copy) NSString *organizationName;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSArray *blueprints;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;

@optional
@property(readonly) BOOL supportsSourceFolders;
@property(readonly) NSArray *sourcePackageReferences;
@property int buildSystemType;
@end

