//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSColor, NSColorWell;

@interface SKInspectorColorProperty : IDEInspectorProperty
{
    NSColorWell *bgColorWell;
    IDEInspectorKeyPath *_valueKeyPath;
    NSColor *_defaultColor;
}

- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;

@end

