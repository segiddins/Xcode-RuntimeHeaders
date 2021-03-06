//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DTKPCPU : NSObject
{
    struct kpep_db *_kpepDB;
    NSMutableArray *_events;
    NSString *_lookupName;
    NSString *_name;
}

+ (id)cpuNamed:(id)arg1 fromSerializedData:(id)arg2 error:(id *)arg3;
+ (id)localCPU:(id *)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)allAliasAndNameStrings;
- (id)eventFromNameOrAlias:(id)arg1;
- (id)eventFromName:(id)arg1;
- (struct kpep_db *)kpepDB;
- (void)dealloc;
- (id)initWithName:(id)arg1 database:(struct kpep_db *)arg2;
- (id)description;

@end

