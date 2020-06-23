//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTMutableOrderedDictionary, NSMutableDictionary, NSString;

@interface DVTRegistry : NSObject
{
    DVTDispatchLock *_lock;
    DVTMutableOrderedDictionary *_identsToObjects;
    NSMutableDictionary *_aliasesToObjects;
    NSString *_debugName;
}

- (void).cxx_destruct;
@property(readonly) DVTDispatchLock *lock; // @synthesize lock=_lock;
- (id)description;
- (id)allRegisteredObjects;
- (id)objectForIdentifier:(id)arg1;
- (void)didRegisterObject:(id)arg1 replacingObject:(id)arg2;
- (BOOL)registerObject:(id)arg1 collisionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSString *debugName;
- (id)init;
- (id)initWithDebugName:(id)arg1;

@end

