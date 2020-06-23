//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUBufferViewerTableTextField.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementTextField : GPUBufferViewerTableTextField
{
    NSNumber *_value;
    unsigned long long _type;
    double _characterWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double characterWidth; // @synthesize characterWidth=_characterWidth;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void)updateContents;
- (void)setValue:(id)arg1 withType:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

