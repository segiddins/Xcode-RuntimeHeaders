//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTAnalyticsPointAbstractClass, NSButton, NSString;

@interface IDEAnalyticsPointOverviewViewController : IDEViewController
{
    DVTAnalyticsPointAbstractClass *_analyticsPoint;
    NSButton *_resolvedButton;
    NSString *_resolvedButtonToolTip;
}

+ (id)keyPathsForValuesAffectingResolvedButtonToolTip;
@property(retain, nonatomic) NSString *resolvedButtonToolTip; // @synthesize resolvedButtonToolTip=_resolvedButtonToolTip;
@property __weak NSButton *resolvedButton; // @synthesize resolvedButton=_resolvedButton;
@property(retain) DVTAnalyticsPointAbstractClass *analyticsPoint; // @synthesize analyticsPoint=_analyticsPoint;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end

