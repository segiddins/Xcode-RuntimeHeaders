//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface Xcode3InfoGroupEntry : NSObject
{
    NSArray *_entries;
    NSString *_title;
}

@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
@property(readonly) id inspectorXML;
- (id)initWithExtension:(id)arg1 infoEditor:(id)arg2;

@end

