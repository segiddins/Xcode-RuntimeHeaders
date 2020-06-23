//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDELocalizationTestActivity-Protocol.h>

@class IDELocalizationTestActivity, NSArray, NSDate, NSString;

@interface IDELocalizationTestActivityLanguage : NSObject <IDELocalizationTestActivity>
{
    BOOL _included;
    long long _screenshotCountSelected;
    IDELocalizationTestActivity *_activity;
    NSString *_language;
    NSArray *_files;
}

+ (id)keyPathsForValuesAffectingIncluded;
+ (BOOL)filePathHasImageExtension:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) __weak IDELocalizationTestActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) long long screenshotCountSelected; // @synthesize screenshotCountSelected=_screenshotCountSelected;
@property(nonatomic, getter=isIncluded) BOOL included; // @synthesize included=_included;
- (id)referenceFilesForLocale:(id)arg1;
@property(readonly, nonatomic, getter=isIncludedEnabled) BOOL includedEnabled;
@property(readonly, nonatomic) long long screenshotCount;
@property(readonly, copy, nonatomic) NSString *formattedLanguage;
@property(readonly, copy, nonatomic) NSDate *startTime;
@property(readonly, copy, nonatomic) NSString *device;
@property(readonly, copy, nonatomic) NSString *scheme;
- (id)initWithLanguage:(id)arg1 files:(id)arg2 forActivity:(id)arg3 isIncluded:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

