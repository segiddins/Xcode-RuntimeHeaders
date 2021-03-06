//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSDynamicNamedColor.h>

@class NSDictionary;

@interface IBICDynamicCocoaColor : NSDynamicNamedColor
{
    unsigned long long _hashValue;
    NSDictionary *_concreteColorsByAppearanceName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *concreteColorsByAppearanceName; // @synthesize concreteColorsByAppearanceName=_concreteColorsByAppearanceName;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUniform;
- (long long)type;
- (id)fallbackColor;
- (id)resolvedColor;
- (void)_computeHashValue;
- (id)initWithConcreteColors:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)ib_fallbackColorForMarshalling;

@end

