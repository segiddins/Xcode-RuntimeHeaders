//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTiOSConditionInducerProfile, NSArray, NSString;

@interface DVTiOSConditionInducer : NSObject
{
    BOOL _destructive;
    BOOL _internal;
    NSString *_identifier;
    NSString *_name;
    NSArray *_profiles;
    unsigned long long _state;
    DVTiOSConditionInducerProfile *_activeProfile;
}

@property __weak DVTiOSConditionInducerProfile *activeProfile; // @synthesize activeProfile=_activeProfile;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSArray *profiles; // @synthesize profiles=_profiles;
@property(getter=isInternal) BOOL internal; // @synthesize internal=_internal;
@property(getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 isDestructive:(BOOL)arg3 isInternal:(BOOL)arg4 profiles:(id)arg5;

@end

