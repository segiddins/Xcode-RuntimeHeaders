//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol IDELocalizationTestActivity <NSObject>
@property(readonly, nonatomic, getter=isIncludedEnabled) BOOL includedEnabled;
@property(nonatomic, getter=isIncluded) BOOL included;
@property(readonly, nonatomic) long long screenshotCountSelected;
@property(readonly, nonatomic) long long screenshotCount;
@property(readonly, copy, nonatomic) NSString *formattedLanguage;
@property(readonly, copy, nonatomic) NSDate *startTime;
@property(readonly, copy, nonatomic) NSString *device;
@property(readonly, copy, nonatomic) NSString *scheme;
@end

