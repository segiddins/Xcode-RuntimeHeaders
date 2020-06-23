//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField, SKEStepperTextField;

@interface SKEInspectorVector2Property : IDEInspectorProperty
{
    SKEStepperTextField *_xScrubber;
    SKEStepperTextField *_yScrubber;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_nilPlaceholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (CDUnknownBlockType)vectorComponentSetter:(long long)arg1 componentValue:(double)arg2;
- (CDUnknownBlockType)vectorComponentExtractor:(long long)arg1;
- (double)baseline;

@end

