//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTMetricsReport.h>

@class NSDictionary;

@interface DBGLLDBInternalMetricsReport : DVTMetricsReport
{
    NSDictionary *_statisticsInJSON;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *statisticsInJSON; // @synthesize statisticsInJSON=_statisticsInJSON;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

