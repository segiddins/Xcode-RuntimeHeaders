//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlRevisionLocation.h>

@class NSString;

@interface DVTSourceControlPathLocation : DVTSourceControlRevisionLocation
{
    NSString *_relativePath;
}

+ (BOOL)supportsSecureCoding;
+ (id)rootPathLocation;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pathLocationByAppendingPath:(id)arg1;
@property(readonly, getter=isDirectory) BOOL directory;
- (id)initWithRelativePath:(id)arg1;
- (id)_init;
- (id)initWithRevision:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentPathLocation;

@end

