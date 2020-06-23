//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTCPRemoteCache : NSObject
{
    id *_locks;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)kindToString:(long long)arg1;
+ (id)sharedDTCPRemoteCache;
- (BOOL)accessFileKind:(long long)arg1 device:(id)arg2 fileType:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)_filePathForKind:(long long)arg1 fileType:(id)arg2 directoryURL:(id)arg3;
- (id)_directoryForDevice:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

