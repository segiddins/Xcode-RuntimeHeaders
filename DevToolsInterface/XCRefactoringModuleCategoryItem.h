//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCRefactoringModuleItem-Protocol.h>

@class NSMutableArray, NSString;

@interface XCRefactoringModuleCategoryItem : NSObject <XCRefactoringModuleItem>
{
    long long _index;
    NSString *_name;
    NSMutableArray *_items;
}

- (BOOL)shouldHaveCheckbox;
- (BOOL)isGroupRow;
- (void)drawBackgroundInRect:(struct CGRect)arg1 rowRect:(struct CGRect)arg2;
- (id)details;
- (id)attributedName;
- (id)name;
- (id)icon;
- (id)childAtIndex:(long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)isExpandable;
- (void)dealloc;
- (void)removeAllItems;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)items;
- (id)initWithNameKey:(id)arg1 index:(long long)arg2;

@end

