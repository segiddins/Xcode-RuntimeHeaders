//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>

@class NSNumber, NSString;

@interface DVTCoverageDataContainer : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSNumber *_lineCoverage;
}

@property(retain, nonatomic) NSNumber *lineCoverage; // @synthesize lineCoverage=_lineCoverage;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;

@end

