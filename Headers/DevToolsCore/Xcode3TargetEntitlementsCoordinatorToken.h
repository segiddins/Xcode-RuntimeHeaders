//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsCore/IDEEntitlementsCoordinatorToken-Protocol.h>

@class Xcode3TargetEntitlementsCoordinator;

@interface Xcode3TargetEntitlementsCoordinatorToken : NSObject <IDEEntitlementsCoordinatorToken>
{
    Xcode3TargetEntitlementsCoordinator *_coordinator;
}

- (void).cxx_destruct;
@property(retain) Xcode3TargetEntitlementsCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)entitlementsAndValues;
- (BOOL)containsEntitlementKey:(id)arg1;
- (BOOL)boolEntitlementValueForKey:(id)arg1;
- (id)stringEntitlementValueForKey:(id)arg1;
- (id)arrayOfStringsEntitlementValueForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setEntitlementValue:(id)arg1 forKey:(id)arg2;
- (id)allEntitlementKeys;
- (id)init;
- (id)initWithSignedEntitlementsCoordinator:(id)arg1;

@end

