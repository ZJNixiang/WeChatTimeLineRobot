/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class SightIconView, UIColor, MMTimer;
@protocol MMQRStrokeViewDelegate;

@interface MMQRStrokeView : XXUnknownSuperclass {
	float m_targetFrame[8];
	float m_currFrame[8];
	float m_startFrame[8];
	MMTimer* m_timer;
	BOOL m_inAnim;
	int m_animState;
	int m_currenHiddenID;
	int m_currenTriggerID;
	int m_postTriggerID;
	SightIconView* m_trigProgress;
	id<MMQRStrokeViewDelegate> _delegate;
	UIColor* _strokeColor;
}
@property(readonly, assign, nonatomic) int animState;
@property(retain, nonatomic) UIColor* strokeColor;
@property(assign, nonatomic) __weak id<MMQRStrokeViewDelegate> delegate;
-(void).cxx_destruct;
-(void)printArray:(float*)array title:(id)title;
-(void)hideFrame;
-(void)trigProgress;
-(void)drawRect:(CGRect)rect;
-(void)prepariForQRFrameGone;
-(void)updateAnimation;
-(void)setTargetFrame:(float*)frame;
-(void)stopTimer;
-(void)startTimer;
-(void)setArray:(float*)array withArray:(float*)array2;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

