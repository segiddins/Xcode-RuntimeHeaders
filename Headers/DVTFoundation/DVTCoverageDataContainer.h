//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface DVTCoverageDataContainer : NSObject <NSSecureCoding>
{
    unsigned int _executableLines;
    unsigned int _coveredLines;
    NSNumber *_lineCoverage;
    NSString *_identifier;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int coveredLines; // @synthesize coveredLines=_coveredLines;
@property(readonly, nonatomic) unsigned int executableLines; // @synthesize executableLines=_executableLines;
@property(readonly, nonatomic) NSNumber *lineCoverage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;

@end

