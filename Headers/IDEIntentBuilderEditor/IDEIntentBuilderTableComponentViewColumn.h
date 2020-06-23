//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEIntentBuilderTableComponentViewColumn : NSObject
{
    NSString *_title;
    unsigned long long _resizingMask;
    double _width;
    NSString *_type;
    NSString *_keyPath;
}

- (void).cxx_destruct;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property double width; // @synthesize width=_width;
@property unsigned long long resizingMask; // @synthesize resizingMask=_resizingMask;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)makeTableCellViewWithOwner:(id)arg1 inTableView:(id)arg2;
- (id)initWithKeyPath:(id)arg1;
- (id)init;

@end

