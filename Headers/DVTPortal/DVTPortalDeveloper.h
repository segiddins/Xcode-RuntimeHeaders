//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

