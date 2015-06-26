#import <UIKit/UIKit.h>
#import <LayerKit/LayerKit.h>

/**
 @abstract Objects conforming to the `MitooConversationViewControllerDelegate` protocol
 */
@protocol MitooConversationViewControllerDelegate <NSObject>

/**
 @abstract Informs the reciever that a message was successfully sent.
 @discussion Custom Mitoo method, so we can send messages to our servers after sending to layer
 */
-(void)conversationMessageSuccessfullySent:(LYRMessage *)message;

/**
 @abstract Informs the reciever that a message was successfully sent.
 @discussion Custom Mitoo method, so we can mute messages
 */
-(NSArray *)getConversationPushNotificationSubscribers;

@end
