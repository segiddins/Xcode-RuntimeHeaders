//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/_TtC15IDESourceEditor19IDESourceEditorView.h>

#import <IDESourceEditor/DVTCharacterRangeFrameConverter-Protocol.h>
#import <IDESourceEditor/DVTLineRangeCharacterRangeConverter-Protocol.h>
#import <IDESourceEditor/DVTSourceLandmarkItemContainer-Protocol.h>
#import <IDESourceEditor/DVTSourceModelProvider-Protocol.h>
#import <IDESourceEditor/DVTTextInsertionPointLocator-Protocol.h>

@interface _TtC15IDESourceEditor19IDESourceEditorView (IDESourceEditor) <DVTSourceModelProvider, DVTSourceLandmarkItemContainer, DVTLineRangeCharacterRangeConverter, DVTCharacterRangeFrameConverter, DVTTextInsertionPointLocator>
- (id)sourceModel;
- (id)sourceLandmarkAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 ignoreWhitespace:(BOOL)arg2;
- (unsigned long long)characterIndexForInsertionAtPoint:(struct CGPoint)arg1;
@end

