//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDETemplateOptionsAssistant.h>

#import <Xcode3UI/IDETemplateTeamPickerViewControllerDelegate-Protocol.h>

@class IDETemplateTeamPickerViewController;

@interface Xcode3ProjectTemplateOptionsAssistant : IDETemplateOptionsAssistant <IDETemplateTeamPickerViewControllerDelegate>
{
    IDETemplateTeamPickerViewController *_teamPickerViewController;
}

- (void).cxx_destruct;
- (void)didSelectTeam:(id)arg1;
- (struct CGRect)_frameForControl:(id)arg1 option:(id)arg2 mainViewBounds:(struct CGRect)arg3 minLabelWidth:(double)arg4;
- (id)createControlForOption:(id)arg1 withOptionArray:(id)arg2;
- (id)additionalSortedOptions;
- (void)primitiveInvalidate;

@end

