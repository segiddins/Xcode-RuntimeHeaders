//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSArrayController.h>

@class NSSearchFieldCell, NSString;

@interface XCLibraryArrayController : NSArrayController
{
    NSString *searchString;
    NSSearchFieldCell *searchField;
    unsigned long long keyTag;
}

- (void)setSearchString:(id)arg1;
- (void)search:(id)arg1;
- (id)arrangeObjects:(id)arg1;
- (void)awakeFromNib;

@end

