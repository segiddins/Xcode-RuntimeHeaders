//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <UVKit/NSUserInterfaceValidations-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC5UVKit20EditorViewController : IDEViewController <NSUserInterfaceValidations>
{
    MISSING_TYPE *editorCoordinator;
    MISSING_TYPE *canvasSelectionCancellation;
    MISSING_TYPE *canvasStoreCancellation;
    MISSING_TYPE *pinnedPreviewCancellation;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

