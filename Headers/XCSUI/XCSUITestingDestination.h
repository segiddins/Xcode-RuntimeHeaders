//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface XCSUITestingDestination : NSObject
{
    unsigned long long _type;
    NSArray *_deviceIdentifiers;
}

+ (id)destinationWithType:(unsigned long long)arg1 deviceIdentifiers:(id)arg2;
@property(copy, nonatomic) NSArray *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

