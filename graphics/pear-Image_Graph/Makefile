# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: head/graphics/pear-Image_Graph/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	Image_Graph
PORTVERSION=	0.8.0
CATEGORIES=	graphics www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	OO PEAR graph rendering package

RUN_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log \
		${PEARDIR}/Image/Canvas.php:graphics/pear-Image_Canvas

USES=		dos2unix pear
DOS2UNIX_REGEX=	.*php$$

.include <bsd.port.mk>
