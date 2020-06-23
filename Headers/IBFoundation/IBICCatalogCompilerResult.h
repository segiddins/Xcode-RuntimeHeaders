//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface IBICCatalogCompilerResult : NSObject <IBBinaryArchiving>
{
    NSMutableArray *_outputFiles;
    NSMutableArray *_hardErrors;
    NSMutableArray *_softErrors;
    NSMutableArray *_issues;
    BOOL _success;
    NSMutableDictionary *_partialInfoPlist;
}

+ (id)resultWithSingleError:(id)arg1;
@property(retain) NSMutableDictionary *partialInfoPlist; // @synthesize partialInfoPlist=_partialInfoPlist;
@property(copy, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(copy, nonatomic) NSArray *softErrors; // @synthesize softErrors=_softErrors;
@property(copy, nonatomic) NSArray *hardErrors; // @synthesize hardErrors=_hardErrors;
@property(copy, nonatomic) NSArray *outputFiles; // @synthesize outputFiles=_outputFiles;
@property(nonatomic) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)mergeResults:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)addOutputFiles:(id)arg1;
- (void)addOutputFile:(id)arg1;
- (void)addIssues:(id)arg1;
- (void)addIssue:(id)arg1;
- (void)addSoftErrors:(id)arg1;
- (void)addSoftError:(id)arg1 wrappedWithDescription:(id)arg2;
- (void)addSoftError:(id)arg1;
- (void)addHardErrors:(id)arg1;
- (void)addHardError:(id)arg1 wrappedWithDescription:(id)arg2;
- (void)addHardError:(id)arg1;
- (void)failWithHardError:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

