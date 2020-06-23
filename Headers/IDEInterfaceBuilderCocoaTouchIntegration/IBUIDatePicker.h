//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSDate, NSLocale, NSString;

@interface IBUIDatePicker : IBUIControl <IBDocumentArchiving>
{
    BOOL _useCurrentDateDuringDecoding;
    BOOL _hasMinimumDate;
    BOOL _hasMaximumDate;
    int _datePickerMode;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSLocale *_locale;
    double _countDownDuration;
    unsigned long long _minuteInterval;
    NSDate *_ibArchivedDate;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedUseCurrentDate;
+ (id)keyPathsForValuesAffectingIbInspectedMaximumDate;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumDate;
+ (id)keyPathsForValuesAffectingIbInspectedDate;
+ (id)keyPathsForValuesAffectingIbInspectedCountDownDurationMinutes;
+ (id)keyPathsForValuesAffectingIbInspectedCountDownDurationHours;
+ (id)keyPathsForValuesAffectingIbInspectedModeIsNotDate;
+ (id)keyPathsForValuesAffectingIbInspectedModeIsNotCountDownTimer;
+ (id)keyPathsForValuesAffectingIbInspectedModeIsCountDownTimer;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy) NSDate *ibArchivedDate; // @synthesize ibArchivedDate=_ibArchivedDate;
@property(nonatomic) unsigned long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(nonatomic) double countDownDuration; // @synthesize countDownDuration=_countDownDuration;
@property(nonatomic) BOOL hasMaximumDate; // @synthesize hasMaximumDate=_hasMaximumDate;
@property(nonatomic) BOOL hasMinimumDate; // @synthesize hasMinimumDate=_hasMinimumDate;
@property(nonatomic) BOOL useCurrentDateDuringDecoding; // @synthesize useCurrentDateDuringDecoding=_useCurrentDateDuringDecoding;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) int datePickerMode; // @synthesize datePickerMode=_datePickerMode;
- (void).cxx_destruct;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
@property(copy) NSDate *ibArchivedMaximumDate;
@property(copy) NSDate *ibArchivedMinimumDate;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(copy) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(copy) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy) NSDate *date; // @synthesize date=_date;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)prefersCachedImageBasedDrawing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIbInspectedUseCurrentDate:(unsigned long long)arg1;
- (unsigned long long)ibInspectedUseCurrentDate;
- (void)setIbInspectedMaximumDate:(id)arg1;
- (id)ibInspectedMaximumDate;
- (void)setIbInspectedMinimumDate:(id)arg1;
- (id)ibInspectedMinimumDate;
- (void)setIbInspectedDate:(id)arg1;
- (id)ibInspectedDate;
- (void)setIbInspectedCountDownDurationMinutes:(long long)arg1;
- (long long)ibInspectedCountDownDurationMinutes;
- (void)setIbInspectedCountDownDurationHours:(long long)arg1;
- (long long)ibInspectedCountDownDurationHours;
- (BOOL)ibInspectedModeIsNotDate;
- (BOOL)ibInspectedModeIsNotCountDownTimer;
- (BOOL)ibInspectedModeIsCountDownTimer;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (unsigned long long)ibPreferredActionEventType;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGSize)ibMinimumSizeForCustomizationForTargetRuntime:(id)arg1;
- (id)ibWidgetType;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

