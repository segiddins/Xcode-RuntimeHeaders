//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@interface SKBitMask32Control : NSControl
{
    unsigned int _bitMask;
    id __target;
    SEL __action;
}

@property(nonatomic) SEL _action; // @synthesize _action=__action;
@property(nonatomic) id _target; // @synthesize _target=__target;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (int)calculateBitMaskIndex:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
@property(nonatomic) unsigned int bitMask;
- (id)initWithFrame:(struct CGRect)arg1;

@end

