//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

