//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSURL;

@interface IDETestReportActivityDocumentLocation : DVTDocumentLocation
{
    NSURL *_screenShotURL;
}

@property(retain, nonatomic) NSURL *screenShotURL; // @synthesize screenShotURL=_screenShotURL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 activityScreenShotURL:(id)arg3;

@end

