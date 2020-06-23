//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTUserInterfaceKit/NSEditor-Protocol.h>

@class DVTWeakInterposer, NSMutableDictionary, NSString;

@interface DVTBindingHelper : NSObject <NSEditor>
{
    DVTWeakInterposer *_owner_dvtWeakInterposer;
    NSMutableDictionary *_bindingInfo;
    NSString *_ignoredBinding;
}

+ (id)dvtValueTransformerFromOptions:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)rebind:(id)arg1;
- (id)unbindForKeyPathsBeginningWithPrefix:(id)arg1;
- (void)didEndEditingForBinding:(id)arg1;
- (void)willBeginEditingForBinding:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forBinding:(id)arg2 error:(id *)arg3;
- (id)modelKeyPathForBinding:(id)arg1;
- (id)referenceDataForBinding:(id)arg1;
- (void)setValue:(id)arg1 forBinding:(id)arg2;
- (id)infoForBinding:(id)arg1;
- (id)bindingHelperInfoForBinding:(id)arg1;
- (BOOL)isBindingBound:(id)arg1;
- (id)valueForBinding:(id)arg1;
- (id)primitiveValueForBinding:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct objc_method *)_methodForUpdateFromBinding:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)unbindAll;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
@property __weak id owner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

