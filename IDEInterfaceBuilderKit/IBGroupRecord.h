//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBMemberRecord.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBGroup;

@interface IBGroupRecord : IBMemberRecord <NSCoding>
{
}

- (BOOL)isGroupRecord;
@property(readonly) IBGroup *group;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

