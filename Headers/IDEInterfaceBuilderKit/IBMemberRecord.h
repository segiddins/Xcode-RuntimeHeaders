//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMemberID, NSMutableDictionary;

@interface IBMemberRecord : NSObject
{
    id _member;
    id _memberID;
    NSMutableDictionary *_metadata;
}

@property(retain) NSObject *member; // @synthesize member=_member;
@property(retain) IBMemberID *memberID; // @synthesize memberID=_memberID;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)metadataCreatingIfNeeded;
- (id)metadataForKey:(id)arg1;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (BOOL)hasMetadata;
- (id)object;
- (id)group;
- (id)connection;
- (BOOL)isGroupRecord;
- (BOOL)isConnectionRecord;
- (BOOL)isObjectRecord;
- (id)initWithMember:(id)arg1 andMemberID:(id)arg2;
- (id)initWithMember:(id)arg1;

@end

