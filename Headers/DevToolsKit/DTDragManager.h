//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTDragManager : NSObject
{
}

+ (BOOL)isUserDragging;
+ (id)sharedInstance;
- (unsigned long long)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 mouseDownEvent:(id)arg4 mouseDraggedEvent:(id)arg5 pasteboard:(id)arg6 allowedOperations:(unsigned long long)arg7 source:(id)arg8 slideBack:(BOOL)arg9 draggingSourceContext:(id)arg10;

@end

