//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCRefactoringControlModule.h>

@class NSMutableArray, XCRefactoringSelectionValidator;

@interface XCRefactoringPopUpButtonModule : XCRefactoringControlModule
{
    XCRefactoringSelectionValidator *_selectionValidator;
    long long _menuIndex;
    NSMutableArray *_transformationSetUpModules;
    long long _snapshotIndex;
}

- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSelectionValidator:(id)arg1;
- (void)changeTransformation:(id)arg1;
- (void)restoreTransformationSnapshot;
- (BOOL)transformationAllowedToChange:(id *)arg1;
- (BOOL)setSetUpModule:(id)arg1 error:(id *)arg2;
- (BOOL)_installTransformationSetUpModuleForMenuIndex:(long long)arg1 error:(id *)arg2;
- (void)_makeTransformationSetUpModule:(id *)arg1 row2SetUpModule:(id *)arg2 forMenuIndex:(long long)arg3;
- (id)_makeTransformationSetUpModuleForIndex:(long long)arg1 class:(Class)arg2 module:(id)arg3 created:(char *)arg4;
- (long long)_calculateInitialMenuIndex;
- (void)_setSelectionPopupButtonItemEnabledStates;
- (id)_transformationPopUpButton;

@end

