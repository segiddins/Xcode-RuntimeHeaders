//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTPlistSelection : NSObject
{
    NSArray *_keyPath;
    struct _NSRange _selectedTextRange;
    BOOL _keyIsSelected;
}

@property(readonly) BOOL keyIsSelected; // @synthesize keyIsSelected=_keyIsSelected;
@property(readonly) struct _NSRange selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(readonly) NSArray *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 selectedTextRange:(struct _NSRange)arg2 keyIsSelected:(BOOL)arg3;
- (id)initWithKeyPath:(id)arg1 keyIsSelected:(BOOL)arg2;
- (id)initWithKeyPath:(id)arg1 selectedTextRange:(struct _NSRange)arg2;
- (id)initWithKeyPath:(id)arg1;
- (long long)compareSelectionForReplacing:(id)arg1;

@end

