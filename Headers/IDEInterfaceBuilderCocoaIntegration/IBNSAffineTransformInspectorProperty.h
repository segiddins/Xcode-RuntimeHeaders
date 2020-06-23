//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSStepper, NSTextField;

@interface IBNSAffineTransformInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_xOffsetTextField;
    NSTextField *_yOffsetTextField;
    NSTextField *_skewTextField;
    NSTextField *_rotateTextField;
    NSTextField *_stretchTextField;
    NSTextField *_scaleTextField;
    NSStepper *_xOffsetStepper;
    NSStepper *_yOffsetStepper;
    NSStepper *_skewStepper;
    NSStepper *_rotateStepper;
    NSStepper *_stretchStepper;
    NSStepper *_scaleStepper;
}

@property(retain) NSStepper *scaleStepper; // @synthesize scaleStepper=_scaleStepper;
@property(retain) NSStepper *stretchStepper; // @synthesize stretchStepper=_stretchStepper;
@property(retain) NSStepper *rotateStepper; // @synthesize rotateStepper=_rotateStepper;
@property(retain) NSStepper *skewStepper; // @synthesize skewStepper=_skewStepper;
@property(retain) NSStepper *yOffsetStepper; // @synthesize yOffsetStepper=_yOffsetStepper;
@property(retain) NSStepper *xOffsetStepper; // @synthesize xOffsetStepper=_xOffsetStepper;
@property(retain) NSTextField *scaleTextField; // @synthesize scaleTextField=_scaleTextField;
@property(retain) NSTextField *stretchTextField; // @synthesize stretchTextField=_stretchTextField;
@property(retain) NSTextField *rotateTextField; // @synthesize rotateTextField=_rotateTextField;
@property(retain) NSTextField *skewTextField; // @synthesize skewTextField=_skewTextField;
@property(retain) NSTextField *yOffsetTextField; // @synthesize yOffsetTextField=_yOffsetTextField;
@property(retain) NSTextField *xOffsetTextField; // @synthesize xOffsetTextField=_xOffsetTextField;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)remplaceTransformComponent:(id)arg1;
- (void)incrementTransformComponent:(id)arg1;
- (void)pushChangesToTransformComponent:(id)arg1 map:(CDUnknownBlockType)arg2;
- (double)baseline;

@end

