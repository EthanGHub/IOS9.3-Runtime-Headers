//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardInputMode.h>

@class UITouch;

@interface UIDictationInputMode : UIKeyboardInputMode
{
    UITouch *_triggeringTouch;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
}

@property(retain, nonatomic) UIKeyboardInputMode *inputModeThatInvokedDictation; // @synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation;
@property(retain, nonatomic) UITouch *triggeringTouch; // @synthesize triggeringTouch=_triggeringTouch;
@property(readonly, nonatomic) Class viewControllerClass;
- (void)dealloc;

@end
