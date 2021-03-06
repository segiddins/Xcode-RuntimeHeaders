//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class NSButton, SCNView;

@interface SKEDisplayOptionPopupController : DVTViewController
{
    NSButton *_bbox;
    NSButton *_wireframe;
    NSButton *_defaultLight;
    NSButton *_cameras;
    NSButton *_lights;
    NSButton *_physics;
    NSButton *_fields;
    NSButton *_grid;
    NSButton *_joints;
    NSButton *_constraints;
    NSButton *_lightProbes;
    NSButton *_outline;
    SCNView *_scnView;
}

+ (BOOL)isOpened:(id)arg1;
- (void).cxx_destruct;
@property __weak SCNView *scnView; // @synthesize scnView=_scnView;
@property __weak NSButton *outline; // @synthesize outline=_outline;
@property __weak NSButton *lightProbes; // @synthesize lightProbes=_lightProbes;
@property __weak NSButton *constraints; // @synthesize constraints=_constraints;
@property __weak NSButton *joints; // @synthesize joints=_joints;
@property __weak NSButton *grid; // @synthesize grid=_grid;
@property __weak NSButton *fields; // @synthesize fields=_fields;
@property __weak NSButton *physics; // @synthesize physics=_physics;
@property __weak NSButton *lights; // @synthesize lights=_lights;
@property __weak NSButton *cameras; // @synthesize cameras=_cameras;
@property __weak NSButton *defaultLight; // @synthesize defaultLight=_defaultLight;
@property __weak NSButton *wireframe; // @synthesize wireframe=_wireframe;
@property __weak NSButton *bbox; // @synthesize bbox=_bbox;
- (void)optionDidChange:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)didResignFirstResponder;
- (id)init;

@end

