//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <GPUDebugger/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <GPUDebugger/NSMenuItemValidation-Protocol.h>

@class GPUDebuggerController, GPUMemoryResourceItem, GPUSharedTabUIState, GPUTraceGaugeDocumentLocation, NSString, _TtC11GPUDebugger24GPUMemoryReportSubEditor;

__attribute__((visibility("hidden")))
@interface GPUMemoryReportEditor : IDEDebugGaugeReportEditor <NSMenuItemValidation, IDEDebugGaugeReportContentDelegate>
{
    _TtC11GPUDebugger24GPUMemoryReportSubEditor *_reportSubEditor;
    GPUSharedTabUIState *_sharedTabUIState;
    GPUTraceGaugeDocumentLocation *_gaugeDocumentLocation;
    GPUMemoryResourceItem *_currentSelectedItem;
    GPUDebuggerController *_debuggerController;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(retain) GPUMemoryResourceItem *currentSelectedItem; // @synthesize currentSelectedItem=_currentSelectedItem;
- (void)navigateToOutlineItem:(id)arg1 userInfo:(id)arg2;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)GPUDebugger_exportMemoryReport:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)sharedUIState;
- (void)_restoreGaugeDocumentLocation;
- (id)_statusSubEditor:(id)arg1 isBusy:(BOOL)arg2;
- (id)_statusSubEditor:(id)arg1;
- (void)_setUpSubEditor;
- (void)_addSubviewFromViewController:(id)arg1;
- (void)_setUpDebugging;
- (void)selectDocumentLocations:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (BOOL)hasDefaultTopSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
