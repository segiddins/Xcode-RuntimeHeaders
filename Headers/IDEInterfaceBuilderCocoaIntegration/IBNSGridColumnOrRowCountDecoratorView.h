//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSGridViewDecoratorTrackingView.h>

@class IBDocument, IBNSGridViewTemplate, NSArray;

@interface IBNSGridColumnOrRowCountDecoratorView : IBNSGridViewDecoratorTrackingView
{
    struct CGRect _initialFrame;
    long long _initialNumberOfRows;
    long long _initialNumberOfColumns;
    IBDocument *_document;
    long long _minimumNumberOfRows;
    long long _minimumNumberOfColumns;
    NSArray *_columnWidths;
    NSArray *_rowHeights;
    IBNSGridViewTemplate *_gridView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IBNSGridViewTemplate *gridView; // @synthesize gridView=_gridView;
- (void)invalidate;
- (void)setFrame:(struct CGRect)arg1;
- (long long)calculateNumberOfAdditionalColumnsOrRowsForLengthDelta:(double)arg1 defaultLength:(double)arg2 existingLengths:(id)arg3;
- (void)ibRegisterViewTrackerChangeFromSize:(struct CGSize)arg1 document:(id)arg2;

@end

