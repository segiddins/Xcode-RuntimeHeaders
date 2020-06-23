//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUInvestigatorReportItem.h>

@class DYInvestigatorCase, DYInvestigatorCaseConfigData;

@interface GPUReportResults : GPUInvestigatorReportItem
{
    DYInvestigatorCaseConfigData *_investigatorCaseConfigData;
    DYInvestigatorCase *_investigatorCase;
}

@property(retain, nonatomic) DYInvestigatorCase *investigatorCase; // @synthesize investigatorCase=_investigatorCase;
@property(retain, nonatomic) DYInvestigatorCaseConfigData *investigatorCaseConfigData; // @synthesize investigatorCaseConfigData=_investigatorCaseConfigData;
- (void).cxx_destruct;
- (id)cpuGPUActiveTimeTimes:(BOOL)arg1;
- (id)utilizationPercentages;
- (id)archive;
- (id)initWithInvestigatorCaseConfigData:(id)arg1 controller:(id)arg2;

@end

