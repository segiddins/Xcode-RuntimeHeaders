//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSStepper, NSTextField;

@interface IBNSAffineTransformInspectorProperty : IDEInspectorProperty
{
    NSTextField *xOffsetTextField;
    NSTextField *yOffsetTextField;
    NSTextField *skewTextField;
    NSTextField *rotateTextField;
    NSTextField *stretchTextField;
    NSTextField *scaleTextField;
    NSStepper *xOffsetStepper;
    NSStepper *yOffsetStepper;
    NSStepper *skewStepper;
    NSStepper *rotateStepper;
    NSStepper *stretchStepper;
    NSStepper *scaleStepper;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)remplaceTransformComponent:(id)arg1;
- (void)incrementTransformComponent:(id)arg1;
- (void)pushChangesToTransformComponent:(id)arg1 map:(CDUnknownBlockType)arg2;
- (double)baseline;

@end

