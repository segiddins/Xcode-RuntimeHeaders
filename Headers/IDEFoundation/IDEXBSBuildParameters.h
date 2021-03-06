//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface IDEXBSBuildParameters : NSObject <NSCopying>
{
    NSString *_projectName;
    NSString *_updateName;
    NSString *_sourceVersion;
    NSNumber *_buildNumber;
    NSString *_buildRecordPath;
    unsigned long long _hash;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *buildRecordPath; // @synthesize buildRecordPath=_buildRecordPath;
@property(readonly, copy) NSNumber *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, copy) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(readonly, copy) NSString *updateName; // @synthesize updateName=_updateName;
@property(readonly, copy) NSString *projectName; // @synthesize projectName=_projectName;
- (id)dvt_detailedDebugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForProject:(id)arg1 fromUpdate:(id)arg2 sourceVersion:(id)arg3 buildNumber:(id)arg4 buildRecordPath:(id)arg5;

@end

