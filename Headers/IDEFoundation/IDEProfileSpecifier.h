//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDEProfileSpecifier : NSObject <NSCopying>
{
    NSString *_teamID;
    NSString *_specifier;
}

@property(readonly, nonatomic) NSString *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (void)_parseString:(id)arg1 teamSpecifier:(id *)arg2 specifier:(id *)arg3;
- (id)chunkFromString:(id)arg1 remainingString:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithString:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithTeamID:(id)arg1 specifier:(id)arg2;

@end

