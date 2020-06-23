//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSAttributedString, NSString, NSUndoManager;

@protocol DVTDiffSessionTextEditBuffer <NSObject>
@property(readonly, copy) NSString *string;
- (void)setAttributedString:(NSAttributedString *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2 withUndoManager:(NSUndoManager *)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (void)endEditing;
- (void)beginEditing;
@end
