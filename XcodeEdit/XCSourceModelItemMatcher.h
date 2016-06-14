//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSourceModel, XCTextStorage, XCTextView;

@interface XCSourceModelItemMatcher : NSObject
{
    XCTextView *_textView;
}

+ (BOOL)canHandleSourceModelItem:(id)arg1 inTextView:(id)arg2;
+ (void)unregisterSourceModelItemMatcherClass:(Class)arg1;
+ (void)registerSourceModelItemMatcherClass:(Class)arg1;
+ (id)registeredSourceModelItemMatcherClasses;
+ (void)initialize;
@property(readonly, nonatomic) XCTextView *textView; // @synthesize textView=_textView;
- (id)matchedSourceModelItemsForSourceModelItem:(id)arg1;
@property(readonly, nonatomic) XCSourceModel *sourceModel; // @dynamic sourceModel;
@property(readonly, nonatomic) XCTextStorage *textStorage; // @dynamic textStorage;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

@end

