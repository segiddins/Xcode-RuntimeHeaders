//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SKWorkspacePreferences : NSObject
{
    NSMutableDictionary *_documentURLToPan;
    NSMutableDictionary *_documentURLToZoom;
    NSMutableDictionary *_documentURLToSelectionIndex;
}

+ (id)preferences;
- (void).cxx_destruct;
- (void)pushDefaultSelectionIndex:(unsigned long long)arg1 forEditorDocument:(id)arg2;
- (unsigned long long)popDefaultSelectionIndexForEditorDocument:(id)arg1;
- (void)pushDefaultZoom:(double)arg1 forEditorDocument:(id)arg2;
- (double)popDefaultZoomForEditorDocument:(id)arg1;
- (void)pushDefaultPan:(struct CGPoint)arg1 forEditorDocument:(id)arg2;
- (struct CGPoint)popDefaultPanForEditorDocument:(id)arg1;
- (id)init;

@end

