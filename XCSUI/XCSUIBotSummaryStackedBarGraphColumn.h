//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XCSBuildResultSummary;

@interface XCSUIBotSummaryStackedBarGraphColumn : NSObject
{
    BOOL _isCurrentPopoverTarget;
    NSString *_columnNumber;
    NSArray *_bars;
    unsigned long long _totalBarHeight;
    XCSBuildResultSummary *_buildResultSummary;
    unsigned long long _columnViewType;
    unsigned long long _integrationResultsOverview;
    unsigned long long _graphType;
    NSString *_integrationId;
    struct CGRect _layoutRect;
    struct CGRect _hitTestRect;
}

+ (id)columnDataWithColumnNumber:(id)arg1 bars:(id)arg2 columnViewType:(unsigned long long)arg3 integrationResultsOverview:(unsigned long long)arg4 buildResultSummary:(id)arg5 graphType:(unsigned long long)arg6 integrationId:(id)arg7;
@property struct CGRect hitTestRect; // @synthesize hitTestRect=_hitTestRect;
@property(retain) NSString *integrationId; // @synthesize integrationId=_integrationId;
@property unsigned long long graphType; // @synthesize graphType=_graphType;
@property unsigned long long integrationResultsOverview; // @synthesize integrationResultsOverview=_integrationResultsOverview;
@property unsigned long long columnViewType; // @synthesize columnViewType=_columnViewType;
@property BOOL isCurrentPopoverTarget; // @synthesize isCurrentPopoverTarget=_isCurrentPopoverTarget;
@property(retain) XCSBuildResultSummary *buildResultSummary; // @synthesize buildResultSummary=_buildResultSummary;
@property struct CGRect layoutRect; // @synthesize layoutRect=_layoutRect;
@property unsigned long long totalBarHeight; // @synthesize totalBarHeight=_totalBarHeight;
@property(copy) NSArray *bars; // @synthesize bars=_bars;
@property(copy) NSString *columnNumber; // @synthesize columnNumber=_columnNumber;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)cumulativeValueOfBars;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

