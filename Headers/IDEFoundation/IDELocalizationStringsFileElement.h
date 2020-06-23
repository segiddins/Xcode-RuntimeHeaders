//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDELocalizationStringsFileElement : NSObject <NSCopying>
{
    NSString *_key;
    NSString *_value;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)stringsFileRepresentation;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToLocalizationStringsFileElement:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithKey:(id)arg1 value:(id)arg2 comment:(id)arg3;

@end
