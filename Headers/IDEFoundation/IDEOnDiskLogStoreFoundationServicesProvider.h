//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEOnDiskLogStoreFoundationServicesProviding-Protocol.h>

@class NSFileManager, NSString;

@interface IDEOnDiskLogStoreFoundationServicesProvider : NSObject <IDEOnDiskLogStoreFoundationServicesProviding>
{
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(readonly) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (BOOL)writeData:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;
- (id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;
- (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

