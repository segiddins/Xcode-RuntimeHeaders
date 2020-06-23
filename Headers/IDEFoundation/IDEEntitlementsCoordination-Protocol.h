//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class DVTFilePath, NSArray, NSString;
@protocol IDEProjectItem;

@protocol IDEEntitlementsCoordination <NSObject, DVTInvalidation>
- (void)addEntitlementsFileForAnyConfigurationNecessary;
- (void)addEntitlementsFileForConfiguration;
- (BOOL)entitlementsContainsEntitlementKey:(NSString *)arg1;
- (BOOL)entitlementsContainsEntitlementKeyForItem:(id <IDEProjectItem>)arg1;
- (void)setEntitlementValue:(id)arg1 forKey:(NSString *)arg2;
- (NSArray *)allEntitlementKeys;
- (void)syncPerformEntitlementsInteractionBlock:(void (^)(id <IDEEntitlementsCoordinatorToken>))arg1;
@property(nonatomic, readonly) DVTFilePath *entitlementsFilePath;
@end

