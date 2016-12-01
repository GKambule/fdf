/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:55:40 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/30 12:55:55 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/includes/libft.h"

so the openning of the file and gnl are two differnts operations

you use both in gnl though. Because the opening of a file is literally the file descriptor... so if the file descriptor is < 0 then it did not openthe file....
So you literally set fd = the file you want to open...
so if you set fd = argv[1] it will take your first paramater and open it. Then the reading will begin from there

did you look at my gnl?

It will work to my seeing. Seems about the same as mine..

yeah but do i still need to open?

otherwise i'm lost o

because of the fd you pass into your gnl you'll always need to open the file first.
Otherwise you are reading something that doesn't exist
can we test my gnl?

Could probably. I just need to remember how to use it =P 

that's my current dillemma

I can send you a piece of code
that I used in my wolf to check if it works
Then you can use the same case but just on your gnl
i have the test fdf files

That's fine. The problem is you still need to write a function to be able to read
the files
i thooought so too that's why i asked because it felt off

Do you want me to send you my reading file functions?
