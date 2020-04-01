//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class DVTFilePath;

@interface IDEOpenQuicklyFileReferenceResult : IDEOpenQuicklyResult
{
    BOOL _representsDynamicContent;
    DVTFilePath *_filePath;
}

+ (id)resultWithCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1 filePath:(id)arg2 representsDynamicContent:(BOOL)arg3 query:(id)arg4;
@property(readonly) BOOL representsDynamicContent; // @synthesize representsDynamicContent=_representsDynamicContent;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
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
- (id)updatedResultForQuery:(id)arg1;

@end

