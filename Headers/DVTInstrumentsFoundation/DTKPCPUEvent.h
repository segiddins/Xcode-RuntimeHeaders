//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTKPCPUEvent : NSObject
{
    struct kpep_event *_kpepEvent;
    NSString *_displayName;
    NSString *_name;
    NSString *_alias;
    NSString *_definition;
}

- (void).cxx_destruct;
@property(nonatomic) struct kpep_event *kpepEvent; // @synthesize kpepEvent=_kpepEvent;
@property(readonly, retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *aliasOrName;
- (id)description;
- (id)initWithName:(id)arg1 alias:(id)arg2 definition:(id)arg3 kpepEvent:(struct kpep_event *)arg4;

@end

