//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <GPUDebugger/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <GPUDebugger/NSMenuItemValidation-Protocol.h>

@class GPUDebuggerController, GPUSharedTabUIState, GPUTraceGaugeDocumentLocation, NSString;

__attribute__((visibility("hidden")))
@interface GPULandingPageEditor : IDEDebugGaugeReportEditor <NSMenuItemValidation, IDEDebugGaugeReportContentDelegate>
{
    GPUSharedTabUIState *_sharedTabUIState;
    GPUTraceGaugeDocumentLocation *_gaugeDocumentLocation;
    GPUDebuggerController *_debuggerController;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
- (BOOL)validateMenuItem:(id)arg1;
- (id)sharedUIState;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (BOOL)hasDefaultTopSection;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (id)landingPageSubEditor;
- (void)addSubViewFromViewController:(id)arg1;
- (void)setUpSubEditor;
- (void)setUpDebugging;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

