//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBFieldEditorConfiguration, NSDictionary;

@interface IBInlineStringEditingContext : NSObject
{
    CDUnknownBlockType titleRectCalculator;
    CDUnknownBlockType endEditingHandler;
    IBFieldEditorConfiguration *fieldEditorConfiguration;
    NSDictionary *userInfo;
}

+ (id)contextWithConfiguration:(id)arg1 titleRectCalculator:(CDUnknownBlockType)arg2 endEditingHandler:(CDUnknownBlockType)arg3;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy) CDUnknownBlockType endEditingHandler; // @synthesize endEditingHandler;
@property(copy) CDUnknownBlockType titleRectCalculator; // @synthesize titleRectCalculator;
@property(copy) IBFieldEditorConfiguration *fieldEditorConfiguration; // @synthesize fieldEditorConfiguration;
- (void).cxx_destruct;
- (id)initWithFieldEditorConfiguration:(id)arg1;

@end

