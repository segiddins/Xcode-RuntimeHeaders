//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <XCSUI/DVTReplacementViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, NSString, XCSUIProgressViewController, XCSUIService;

@interface XCSBotServiceEditor : IDEEditor <DVTReplacementViewDelegate>
{
    XCSUIService *_service;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_currentMaintenanceTasksObserver;
    XCSUIProgressViewController *_pvc;
}

@property(retain) XCSUIProgressViewController *pvc; // @synthesize pvc=_pvc;
@property(retain) DVTObservingToken *currentMaintenanceTasksObserver; // @synthesize currentMaintenanceTasksObserver=_currentMaintenanceTasksObserver;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain, nonatomic) XCSUIService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)observeMaintenanceTasks;
- (void)configureMaintenanceUI;
- (id)serviceDocument;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

