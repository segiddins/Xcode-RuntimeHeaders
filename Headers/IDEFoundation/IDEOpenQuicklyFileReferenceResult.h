//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class DVTFilePath;

@interface IDEOpenQuicklyFileReferenceResult : IDEOpenQuicklyResult
{
    BOOL _representsDynamicContent;
    DVTFilePath *_filePath;
}

+ (id)resultWithCandidate:(struct DVTFuzzyMatchCandidate *)arg1 precision:(long long)arg2 filePath:(id)arg3 representsDynamicContent:(BOOL)arg4 query:(id)arg5;
- (void).cxx_destruct;
@property(readonly) BOOL representsDynamicContent; // @synthesize representsDynamicContent=_representsDynamicContent;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)alternateTitleGivenParentResult:(id)arg1;
- (id)valueStandingInForForAlternateIdentity;
- (unsigned long long)hashForAlternateIdentity;
- (BOOL)isFromPoject;
- (BOOL)isSymbolic;
- (id)sourceSDKFilePath;
- (id)location;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsFileReferenceProviderResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)updatedResultForQuery:(id)arg1 precision:(long long)arg2;

@end

