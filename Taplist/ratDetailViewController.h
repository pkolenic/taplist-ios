//
//  ratDetailViewController.h
//  Taplist
//
//  Created by Kolenic, Patrick on 10/26/13.
//  Copyright (c) 2013 Ratworkshop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ratDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
