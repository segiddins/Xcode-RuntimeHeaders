//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IDEOutlineViewGroupInfo : NSObject
{
    id _headerItem;
    _IDEOutlineViewGroupInfo *_next;
    struct _NSRange _range;
}

@property(retain) _IDEOutlineViewGroupInfo *next; // @synthesize next=_next;
@property(readonly) id headerItem; // @synthesize headerItem=_headerItem;
@property struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange)arg1 andHeaderItem:(id)arg2;
- (id)init;

@end

