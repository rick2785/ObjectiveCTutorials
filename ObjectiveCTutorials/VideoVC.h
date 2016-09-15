//
//  VideoVC.h
//  ObjectiveCTutorials
//
//  Created by Rickey Hrabowskie on 9/12/16.
//  Copyright © 2016 Rickey Hrabowskie. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property (nonatomic,strong) Video *video;
@end
