//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class NSPopUpButton;

@interface IBSizeInspectorArrangeInspectorProperty : IDEInspectorProperty
{
    NSPopUpButton *_arrangePopUpButton;
}

- (void).cxx_destruct;
- (double)baseline;
- (void)disabledActionForArrangementMenuHeaders:(id)arg1;
- (void)arrangeFillContainerHorizontally:(id)arg1;
- (void)arrangeFillContainerVertically:(id)arg1;
- (void)arrangeAlignMiddleInContainer:(id)arg1;
- (void)arrangeAlignCenterInContainer:(id)arg1;
- (void)arrangeAlignMidY:(id)arg1;
- (void)arrangeAlignMidX:(id)arg1;
- (void)arrangeAlignBaselines:(id)arg1;
- (void)arrangeAlignRectEdges:(id)arg1;
- (id)inspectedInterfaceBuilderDocument;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)inspectedDocumentObjects;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

