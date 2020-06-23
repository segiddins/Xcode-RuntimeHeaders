//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYGuestApp.h>

@class NSArray, NSData;

@interface DYLocalApp : DYGuestApp
{
    NSArray *_archs;
    NSData *_bookmarkData;
    BOOL _exists;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingExists;
@property(readonly, nonatomic) BOOL exists; // @synthesize exists=_exists;
- (void).cxx_destruct;
- (BOOL)isArchitectureAvailable:(unsigned long long)arg1;
- (void)setPath:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

