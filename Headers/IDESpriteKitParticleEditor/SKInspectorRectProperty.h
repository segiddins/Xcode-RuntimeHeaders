//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface SKInspectorRectProperty : IDEInspectorProperty
{
    DVTStepperTextField *xLabel;
    DVTStepperTextField *yLabel;
    DVTStepperTextField *wLabel;
    DVTStepperTextField *hLabel;
    NSTextField *xTextField;
    NSTextField *yTextField;
    NSTextField *wTextField;
    NSTextField *hTextField;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_xValueKeyPath;
    IDEInspectorKeyPath *_yValueKeyPath;
    IDEInspectorKeyPath *_wValueKeyPath;
    IDEInspectorKeyPath *_hValueKeyPath;
    NSString *_nilPlaceholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (void)applyUserSizeFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;

@end

