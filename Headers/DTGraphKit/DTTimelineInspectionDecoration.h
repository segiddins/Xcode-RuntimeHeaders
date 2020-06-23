//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSImage;

@interface DTTimelineInspectionDecoration : NSObject
{
    BOOL _clickable;
    NSAttributedString *_summary;
    NSImage *_extendedSummary;
    struct DTTimelineRepresentativeDecoration _representedDecorationInfo;
}

+ (id)pluralizeNoun:(id)arg1 forCount:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isClickable) BOOL clickable; // @synthesize clickable=_clickable;
@property(readonly, nonatomic) struct DTTimelineRepresentativeDecoration representedDecorationInfo; // @synthesize representedDecorationInfo=_representedDecorationInfo;
@property(retain, nonatomic) NSImage *extendedSummary; // @synthesize extendedSummary=_extendedSummary;
@property(copy, nonatomic) NSAttributedString *summary; // @synthesize summary=_summary;
- (void)setSummaryAsString:(id)arg1;
@property(readonly, nonatomic) NSDictionary *baseStringAttributes;
@property(readonly, nonatomic) struct XRTimeRange range;
- (id)init;
- (id)initWithRepInfo:(struct DTTimelineRepresentativeDecoration)arg1;

@end

