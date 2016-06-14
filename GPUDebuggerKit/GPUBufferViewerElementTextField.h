//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUBufferViewerTableTextField.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementTextField : GPUBufferViewerTableTextField
{
    NSNumber *_value;
    unsigned long long _type;
    double _characterWidth;
}

@property(nonatomic) double characterWidth; // @synthesize characterWidth=_characterWidth;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)updateContents;
- (void)setValue:(id)arg1 withType:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

