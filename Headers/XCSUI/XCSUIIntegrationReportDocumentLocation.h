//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface XCSUIIntegrationReportDocumentLocation : DVTDocumentLocation
{
    unsigned long long _selectTab;
}

@property unsigned long long selectTab; // @synthesize selectTab=_selectTab;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDocumentURL:(id)arg1 selectTab:(unsigned long long)arg2;

@end

