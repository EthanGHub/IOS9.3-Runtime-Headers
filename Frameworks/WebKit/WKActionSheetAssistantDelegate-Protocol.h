//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class WKActionSheetAssistant, _WKActivatedElementInfo;

@protocol WKActionSheetAssistantDelegate <NSObject>
- (RetainPtr_f649c0c3)actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (_Bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (const struct InteractionInformationAtPosition *)positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
@end
