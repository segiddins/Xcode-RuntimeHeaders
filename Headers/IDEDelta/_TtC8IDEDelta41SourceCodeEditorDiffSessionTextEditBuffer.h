//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEDelta/DVTDiffSessionTextEditBuffer-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC8IDEDelta41SourceCodeEditorDiffSessionTextEditBuffer : NSObject <DVTDiffSessionTextEditBuffer>
{
    MISSING_TYPE *dataSource;
    MISSING_TYPE *editAssistant;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *string;
- (void)setAttributedString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withUndoManager:(id)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)endEditing;
- (void)beginEditing;

@end
