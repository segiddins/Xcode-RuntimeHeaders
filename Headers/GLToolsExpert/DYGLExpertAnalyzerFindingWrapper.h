//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsExpert/NSCopying-Protocol.h>
#import <GLToolsExpert/NSSecureCoding-Protocol.h>

@class DYGLAnalyzerFinding;

__attribute__((visibility("hidden")))
@interface DYGLExpertAnalyzerFindingWrapper : NSObject <NSSecureCoding, NSCopying>
{
    DYGLAnalyzerFinding *finding;
    BOOL used;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL used; // @synthesize used;
@property(readonly, nonatomic) DYGLAnalyzerFinding *finding; // @synthesize finding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFinding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
