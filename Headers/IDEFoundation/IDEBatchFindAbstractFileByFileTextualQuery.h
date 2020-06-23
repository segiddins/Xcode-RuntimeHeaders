//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractFileByFileQuery.h>

@class IDETextFragmentIndexQuickRejectionFilterProbe, NSLocale, NSRegularExpression, NSString;

@interface IDEBatchFindAbstractFileByFileTextualQuery : IDEBatchFindAbstractFileByFileQuery
{
    IDETextFragmentIndexQuickRejectionFilterProbe *_filterProbe;
    NSRegularExpression *_regularExpression;
    NSString *_queryText;
    NSLocale *_locale;
}

- (void).cxx_destruct;
- (void)processFilePath:(id)arg1 explicitFileDataType:(id)arg2 fromIndex:(long long)arg3 of:(id)arg4 queryStartTime:(id)arg5 statusAggregator:(id)arg6 resultOrder:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)generateFileMatchIfNeeded:(id *)arg1 populatingResults:(id *)arg2 forFilePath:(id)arg3 fromIndex:(long long)arg4 snapshot:(id)arg5 resultOrder:(long long)arg6 statusAggregator:(id)arg7;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (BOOL)treatsTextAsRegularExpression;
- (id)initWithSpecification:(id)arg1 priority:(long long)arg2 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg3 initialLineWrappingParameters:(id)arg4 workspace:(id)arg5 error:(id *)arg6;

@end

