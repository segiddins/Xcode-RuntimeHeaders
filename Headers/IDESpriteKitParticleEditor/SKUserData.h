//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUserData : NSObject
{
    unsigned long long _type;
    NSString *_name;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)toStringRepresentation;

@end

