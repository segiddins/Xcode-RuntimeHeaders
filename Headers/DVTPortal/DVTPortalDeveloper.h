//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DVTPortalDeveloper : NSObject
{
    NSString *_memberID;
    NSNumber *_personID;
}

+ (id)developerForAccount:(id)arg1 outError:(id *)arg2;
@property(copy, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *memberID; // @synthesize memberID=_memberID;
- (void).cxx_destruct;

@end

