//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/DVHighlightable-Protocol.h>

@class DVSKTouchEvent, NSMenu;

@protocol SKSelectable <DVHighlightable>
- (BOOL)isResourceSelected:(unsigned long long)arg1 atAttachmentIndex:(unsigned long long)arg2;
- (BOOL)isSelected;
- (NSMenu *)contextMenuAtLocation:(struct CGPoint)arg1;
- (DVSKTouchEvent *)acceptTouch:(struct CGPoint)arg1 modified:(BOOL)arg2;
@end

