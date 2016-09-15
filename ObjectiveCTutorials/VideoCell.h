//
//  VideoCell.h
//  ObjectiveCTutorials
//
//  Created by Rickey Hrabowskie on 9/11/16.
//  Copyright © 2016 Rickey Hrabowskie. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCell : UITableViewCell
-(void)updateUI:(nonnull Video*)video;
@end
