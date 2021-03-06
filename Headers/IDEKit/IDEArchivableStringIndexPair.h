//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCoding-Protocol.h>
#import <IDEKit/NSCopying-Protocol.h>

@class NSString;

@interface IDEArchivableStringIndexPair : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long index; // @synthesize index=_index;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 index:(unsigned long long)arg2;

@end

