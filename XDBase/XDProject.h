//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface XDProject : NSObject
{
    NSString *_name;
    NSMutableDictionary *_modelManagers;
}

+ (id)sharedManagerForOfType:(id)arg1 inKey:(id)arg2;
+ (void)registerModelManagerClass:(Class)arg1;
+ (id)sharedXDProjectForKey:(id)arg1;
- (id)modelManagers;
- (id)modelManagerForName:(id)arg1;
- (void)removeModelManager:(id)arg1;
- (void)addModelManager:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

