//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBMissingConnectionComponent : NSObject
{
    NSString *title;
    NSString *keyPath;
    id value;
}

+ (id)sortedComponentsForLabels:(id)arg1;
+ (id)componentWithTitle:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
@property(readonly) id value; // @synthesize value;
@property(readonly) NSString *keyPath; // @synthesize keyPath;
@property(readonly) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 keyPath:(id)arg2 value:(id)arg3;

@end

