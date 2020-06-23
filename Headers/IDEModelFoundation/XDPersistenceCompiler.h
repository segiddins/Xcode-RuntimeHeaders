//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, XDPersistenceErrorCallback;

@interface XDPersistenceCompiler : NSObject
{
    NSDictionary *_compilerFlags;
    XDPersistenceErrorCallback *_errorWarningCallback;
}

- (void).cxx_destruct;
@property(retain) XDPersistenceErrorCallback *errorWarningCallback; // @synthesize errorWarningCallback=_errorWarningCallback;
@property(copy) NSDictionary *compilerFlags; // @synthesize compilerFlags=_compilerFlags;
- (BOOL)compile:(id)arg1 to:(id)arg2 flags:(id)arg3 errorWarningCallback:(id)arg4;
- (BOOL)_compileVersionedDataModelAtPath:(id)arg1 destinationBundlePath:(id)arg2;
- (BOOL)_compileSourceFilePath:(id)arg1 destinationFilePath:(id)arg2 versionHashes:(id *)arg3 createOptimizedCopy:(BOOL)arg4;

@end
