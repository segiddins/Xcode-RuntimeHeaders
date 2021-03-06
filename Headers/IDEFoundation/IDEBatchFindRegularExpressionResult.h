//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractMatchResult.h>

@class NSRegularExpression, NSString, NSTextCheckingResult;

@interface IDEBatchFindRegularExpressionResult : IDEBatchFindAbstractMatchResult
{
    NSRegularExpression *_regularExpression;
    NSTextCheckingResult *_textCheckingResult;
    NSString *_searchedText;
}

- (void).cxx_destruct;
@property(readonly) NSString *searchedText; // @synthesize searchedText=_searchedText;
@property(readonly) NSTextCheckingResult *textCheckingResult; // @synthesize textCheckingResult=_textCheckingResult;
@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)generateFindResult;
- (id)initWithDocumentLocation:(id)arg1 contextText:(id)arg2 contextTextMatchingRange:(struct _NSRange)arg3 regularExpression:(id)arg4 searchedText:(id)arg5 textCheckingResult:(id)arg6 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg7 parent:(id)arg8 queryIdentifier:(long long)arg9 resultIdentifier:(long long)arg10;

@end

