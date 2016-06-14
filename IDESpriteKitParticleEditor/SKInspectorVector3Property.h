//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface SKInspectorVector3Property : IDEInspectorProperty
{
    DVTStepperTextField *xLabel;
    DVTStepperTextField *yLabel;
    DVTStepperTextField *zLabel;
    NSTextField *xTextField;
    NSTextField *yTextField;
    NSTextField *zTextField;
    IDEInspectorKeyPath *_xValueKeyPath;
    IDEInspectorKeyPath *_yValueKeyPath;
    IDEInspectorKeyPath *_zValueKeyPath;
    NSString *_nilPlaceholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end

