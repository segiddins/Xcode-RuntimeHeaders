//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface XCETestConfigurableFormatter : NSFormatter
{
    struct NSObject *_adapter;
    CDStruct_47239cbd _flags;
}

- (void)dealloc;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (struct NSObject *)adapter;
- (void)setAdapter:(struct NSObject *)arg1;

@end

