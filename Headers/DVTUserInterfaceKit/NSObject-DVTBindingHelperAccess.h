//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTBindingHelper;

@interface NSObject (DVTBindingHelperAccess)
+ (void)dvt_substituteBindingMachinery;
+ (void)dvtSubstituteBindingMachinery;
- (void)dvt_clearBindingHelper;
@property(readonly) DVTBindingHelper *dvt_bindingHelper;
@property(readonly) DVTBindingHelper *bindingHelper;
- (id)dvt_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)dvt_updateBoundValueForBinding:(id)arg1;
- (void)updateBoundValueForBinding:(id)arg1;
- (id)dvt_extraBindings;
- (id)dvtExtraBindings;
@end
