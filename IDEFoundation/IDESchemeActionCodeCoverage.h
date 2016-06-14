//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface IDESchemeActionCodeCoverage : NSObject <NSCoding>
{
    NSNumber *_lineCoverage;
    NSNumber *_functionCoverage;
    NSMutableDictionary *_cachedSourceFiles;
    NSArray *_codeCoverageTargets;
    NSString *_fullDescription;
}

+ (id)coverageReportForPath:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSArray *codeCoverageTargets; // @synthesize codeCoverageTargets=_codeCoverageTargets;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *functionCoverage;
@property(readonly, nonatomic) NSNumber *lineCoverage;
- (id)functions;
- (id)lines;
- (id)wrappedContainer;
- (id)aggregateWithCoverageReport:(id)arg1;
- (BOOL)writeToPath:(id)arg1 error:(id *)arg2;
- (id)sourceFileCoverageDataForDocumentWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodeCoverageTargets:(id)arg1;
- (id)init;

@end

