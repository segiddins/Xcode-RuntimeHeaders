//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface IDECoverageBuilder : NSObject
{
    struct LLVMOpaqueCoverageMapping *_coverageMapping;
    NSSet *_coveredSourceFiles;
    NSArray *_binaryPaths;
    NSArray *_binaryArchitectures;
    NSString *_profilePath;
}

+ (id)functionCoverageForInstantiationGroup:(struct LLVMOpaqueCoverageInstantiationGroup *)arg1 inFile:(id)arg2 coverageMapping:(struct LLVMOpaqueCoverageMapping *)arg3 outNeedsDemangling:(char *)arg4;
+ (void)getStartLine:(unsigned int *)arg1 endLine:(unsigned int *)arg2 executableLines:(unsigned int *)arg3 coveredLines:(unsigned int *)arg4 fillingLines:(id)arg5 forCoverageData:(struct LLVMOpaqueCoverageData *)arg6;
+ (id)getSubrangesForLineSegments:(id)arg1 wrappedSegment:(struct LLVMOpaqueCoverageSegment *)arg2;
@property(readonly, nonatomic) NSString *profilePath; // @synthesize profilePath=_profilePath;
@property(readonly, nonatomic) NSArray *binaryArchitectures; // @synthesize binaryArchitectures=_binaryArchitectures;
@property(readonly, nonatomic) NSArray *binaryPaths; // @synthesize binaryPaths=_binaryPaths;
- (void).cxx_destruct;
- (id)functionsForFile:(id)arg1 demangler:(CDUnknownBlockType)arg2;
- (id)linesForFile:(id)arg1;
@property(readonly, nonatomic) NSSet *coveredSourceFiles;
- (void)dealloc;
- (id)initWithBinaryPaths:(id)arg1 binaryArchitectures:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

