//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTObjectBindingUtilities : NSObject
{
}

+ (BOOL)object:(id)arg1 extraBindingsContainsBinding:(id)arg2;
+ (void)initialize;
- (id)dvtGeneric_infoForBinding:(id)arg1;
- (void)dvtGeneric_unbind:(id)arg1;
- (void)dvtGeneric_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)dvt_exposedBindings;

@end

