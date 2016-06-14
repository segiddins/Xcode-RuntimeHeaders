//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, DVTTableCellViewMultiLine, NSDictionary, NSString;

@interface DVTTableCellViewMultiLineHeightEstimator : NSObject <DVTInvalidation>
{
    struct CGSize _cachedFittingSize;
    double _cachedTitleLineHeight;
    double _cachedSubtitleLineHeight;
    NSDictionary *_cachedTitleTextFieldAttributes;
    NSDictionary *_cachedSubtitleTextFieldAttributes;
    DVTObservingToken *_maxNumberOfTitleLinesObserver;
    DVTObservingToken *_maxNumberOfSubtitleLinesObserver;
    DVTTableCellViewMultiLine *_tableCellView;
}

+ (void)initialize;
@property(readonly) DVTTableCellViewMultiLine *tableCellView; // @synthesize tableCellView=_tableCellView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (double)_subtitleHeightDeltaForWidth:(double)arg1 subtitle:(id)arg2;
- (double)_titleHeightDeltaForWidth:(double)arg1 title:(id)arg2;
- (double)estimatedHeightForWidth:(double)arg1 title:(id)arg2 subTitle:(id)arg3;
- (void)_updateCachedValues;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

