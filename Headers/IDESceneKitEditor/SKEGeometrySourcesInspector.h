//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/SKEStaticTableViewInspector.h>

@class DVTGradientImageButton, NSPanel;

@interface SKEGeometrySourcesInspector : SKEStaticTableViewInspector
{
    DVTGradientImageButton *_deleteButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_quickLookButton;
    NSPanel *_panel;
}

+ (BOOL)wantsEditionBar;
+ (id)tableColumnTitles;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)cancelPanel:(id)arg1;
- (void)acceptPanel:(id)arg1;
- (void)weldVerticesPanel:(id)arg1;
- (void)computeNormals:(id)arg1;
- (void)addNormalsPanel:(id)arg1;
- (void)addAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)quickLookAction:(id)arg1;
- (void)configureEditionBar;
- (void)loadView;
- (void)primitiveInvalidate;

@end

