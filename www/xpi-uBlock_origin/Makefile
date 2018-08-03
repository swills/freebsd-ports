# Created by: Thierry Thomas <thierry@pompo.net>
# $FreeBSD: head/www/xpi-uBlock_origin/Makefile 475890 2018-07-30 13:39:19Z tobik $

PORTNAME=	ublock_origin
PORTVERSION=	1.13.8	# Do not upgrade with the current xpi framework
DISTVERSIONSUFFIX=	-an+fx+sm+tb
CATEGORIES=	www

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Efficient blocker for Firefox, fast and lean

LICENSE=	GPLv3

DEPRECATED=	legacy version, the latest one working with the ports xpi framework

XPI_NUM=	607454
XPI_ID=		uBlock0@raymondhill.net

NO_ARCH=	yes

.include "../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
