//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFinding.h>

__attribute__((visibility("hidden")))
@interface DYGLExpertVertexObjectFinding : DYGLExpertFinding
{
    unsigned int _notableEvidence;
}

+ (BOOL)supportsSecureCoding;
- (void)generateRecommendation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(int)arg1 withConfidence:(float)arg2 withNotableEvidence:(unsigned int)arg3;
- (id)initWithKind:(int)arg1 withConfidence:(float)arg2;
- (id)description;

@end

