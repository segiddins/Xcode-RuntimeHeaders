//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSObject-Protocol.h>
#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol DVTPropertyListValue <NSObject, NSSecureCoding, NSCopying>
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSString *stringValue;
@end

