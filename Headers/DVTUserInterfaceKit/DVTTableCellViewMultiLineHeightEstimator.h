//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTUserInterfaceKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTTableCellViewMultiLine, NSString;

@interface DVTTableCellViewMultiLineHeightEstimator : NSObject <DVTInvalidation>
{
    DVTTableCellViewMultiLine *_tableCellView;
}

+ (void)initialize;
@property(readonly) DVTTableCellViewMultiLine *tableCellView; // @synthesize tableCellView=_tableCellView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (double)estimatedHeightForWidth:(double)arg1 title:(id)arg2 subTitle:(id)arg3;
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

