//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8IDEDelta18BlameVisualization : NSObject
{
    MISSING_TYPE *sourceEditorView;
    MISSING_TYPE *unavailabilityTextField;
    MISSING_TYPE *blameController;
    MISSING_TYPE *blameItemsByLine;
    MISSING_TYPE *blameItemsToLineLayers;
    MISSING_TYPE *installedBlameItems;
}

+ (id)installedVisualizationInEditorView:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)createAnnotations;
- (void)removeFromSourceEditorView:(id)arg1;
- (void)addToSourceEditorView:(id)arg1;
- (id)initWithBlameController:(id)arg1;

@end

