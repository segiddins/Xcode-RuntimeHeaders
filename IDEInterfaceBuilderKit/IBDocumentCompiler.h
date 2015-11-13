//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDocument, NSString;

@interface IBDocumentCompiler : NSObject <DVTInvalidation>
{
    IBDocument *_sourceDocument;
    IBDocument *_intermediateDocument;
}

+ (BOOL)finishCompilingDocument:(id)arg1 withOutputPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (BOOL)shouldCopyDeviceSpecificStringsFilesForDocument:(id)arg1;
+ (BOOL)shouldCompileDeviceSpecificTopLevelPackagesForDocument:(id)arg1;
+ (BOOL)copyStringsFiles:(id)arg1 forDocument:(id)arg2 compiledToPath:(id)arg3 addTargetDeviceSuffix:(BOOL)arg4 options:(id)arg5 error:(id *)arg6;
+ (BOOL)writeCompiledPackage:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compileContentsOfDocument:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)productPathExtension;
+ (void)initialize;
@property(readonly) IBDocument *intermediateDocument; // @synthesize intermediateDocument=_intermediateDocument;
@property(readonly) IBDocument *sourceDocument; // @synthesize sourceDocument=_sourceDocument;
- (void).cxx_destruct;
- (id)compileWithOptions:(id)arg1 error:(id *)arg2;
- (void)invokeWithIntermediateDocumentOfTargetRuntime:(id)arg1 alwaysCopy:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (void)invokeWithIntermediateDocument:(CDUnknownBlockType)arg1;
- (void)invokeWhileUsingSourceAsIntermediateDocument:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithSourceDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

