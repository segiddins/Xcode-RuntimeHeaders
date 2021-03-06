//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSDictionary, NSString;

@interface DVTBindingInfo : NSObject
{
    DVTWeakInterposer *_observedObject_dvtWeakInterposer;
    NSString *_observedKeyPath;
    NSDictionary *_bindingOptions;
    NSString *_modelKeyPath;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *bindingOptions; // @synthesize bindingOptions=_bindingOptions;
@property(readonly, copy) NSString *observedKeyPath; // @synthesize observedKeyPath=_observedKeyPath;
- (id)_modelKeyPath;
- (id)_infoDictionary;
- (id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 bindingOptions:(id)arg3;
@property __weak id observedObject;

@end

