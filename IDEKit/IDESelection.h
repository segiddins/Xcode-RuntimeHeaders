//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray;

@interface IDESelection : NSObject <NSCopying>
{
    NSArray *_navigableItemArchivableRepresentations;
}

+ (id)selectionWithNavigableItemArchivableRepresentations:(id)arg1;
+ (id)selectionWithNavigableItems:(id)arg1;
@property(readonly, copy) NSArray *navigableItemArchivableRepresentations; // @synthesize navigableItemArchivableRepresentations=_navigableItemArchivableRepresentations;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNavigableItemArchivableRepresentations:(id)arg1;

@end

