//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DevkitLocation, NSString;

@interface DevkitPropertyAttributesInfo : NSObject
{
    NSString *_getterName;
    DevkitLocation *_getterNameLocation;
    NSString *_setterName;
    DevkitLocation *_setterNameLocation;
    NSString *_ivarName;
    int _setterKind;
    int _ownershipKind;
    BOOL _readOnly;
    BOOL _atomic;
}

@property BOOL atomic; // @synthesize atomic=_atomic;
@property int ownershipKind; // @synthesize ownershipKind=_ownershipKind;
@property int setterKind; // @synthesize setterKind=_setterKind;
@property(retain) NSString *ivarName; // @synthesize ivarName=_ivarName;
@property(readonly) DevkitLocation *setterNameLocation; // @synthesize setterNameLocation=_setterNameLocation;
@property(readonly) DevkitLocation *getterNameLocation; // @synthesize getterNameLocation=_getterNameLocation;
@property(retain) NSString *setterName; // @synthesize setterName=_setterName;
@property(retain) NSString *getterName; // @synthesize getterName=_getterName;
@property BOOL readOnly; // @synthesize readOnly=_readOnly;
- (void).cxx_destruct;
- (id)description;
- (void)addIvar:(const char *)arg1;
- (void)addSetter:(const char *)arg1 location:(id)arg2;
- (void)addGetter:(const char *)arg1 location:(id)arg2;
- (id)init;

@end

