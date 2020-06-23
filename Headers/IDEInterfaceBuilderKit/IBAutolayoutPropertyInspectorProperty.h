//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTButtonTextField, IBAutolayoutPropertyEditingController, IDEInspectorKeyPath, NSStepper;

@interface IBAutolayoutPropertyInspectorProperty : IDEInspectorProperty
{
    DVTButtonTextField *_textField;
    IBAutolayoutPropertyEditingController *_editingController;
    IDEInspectorKeyPath *_propertyKeyPath;
    NSStepper *_stepper;
}

- (void).cxx_destruct;
@property(retain) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(readonly, nonatomic) IDEInspectorKeyPath *propertyKeyPath; // @synthesize propertyKeyPath=_propertyKeyPath;
@property(readonly, nonatomic) IBAutolayoutPropertyEditingController *editingController; // @synthesize editingController=_editingController;
@property(retain) DVTButtonTextField *textField; // @synthesize textField=_textField;
- (void)primitiveInvalidate;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)objectsKeyPath;
- (id)makeEditingController;
- (id)inspectedDocument;
- (id)inspectorController;
- (id)nibBundle;
- (id)nibName;

@end

