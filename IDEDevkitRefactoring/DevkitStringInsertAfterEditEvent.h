//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitEditEvent.h>

@class NSString;

@interface DevkitStringInsertAfterEditEvent : DevkitEditEvent
{
    NSString *_newString;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)classCompareOrder;
- (id)newString;
- (BOOL)applyChange:(id)arg1;
- (id)initWithLocation:(id)arg1 newString:(id)arg2 priority:(long long)arg3;

@end

