//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDETestPlanEditor/_TtC17IDETestPlanEditor14TestPlanEditor.h>

#import <IDETestPlanEditor/DVTReplacementViewDelegate-Protocol.h>
#import <IDETestPlanEditor/DVTTabChooserViewDelegate-Protocol.h>
#import <IDETestPlanEditor/NSUserInterfaceValidations-Protocol.h>

@interface _TtC17IDETestPlanEditor14TestPlanEditor (IDETestPlanEditor) <DVTTabChooserViewDelegate, DVTReplacementViewDelegate, NSUserInterfaceValidations>
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)menuCmd_addConfiguration:(id)arg1;
- (void)menuCmd_addTestTarget:(id)arg1;
- (void)menuCmd_showConfigurations:(id)arg1;
- (void)menuCmd_showTests:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@end

