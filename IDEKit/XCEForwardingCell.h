//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class IDEConfigurableDataNode;

@interface XCEForwardingCell : NSCell
{
    IDEConfigurableDataNode *_dataNode;
}

@property(retain, nonatomic) IDEConfigurableDataNode *dataNode; // @synthesize dataNode=_dataNode;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

