# $FreeBSD: head/net/libmediawiki-kde4/Makefile 468520 2018-04-28 07:39:40Z tcberner $

PORTNAME=	libmediawiki
PORTVERSION=	4.12.0
PORTREVISION=	3
CATEGORIES=	net kde
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for accessing MediaWiki sites

PORTSCOUT=	limit:^4\.12\.

USES=		pathfix
USE_LDCONFIG=	yes

.include "${.CURDIR:H:H}/graphics/digikam-kde4/Makefile.common"

# Replace some values set up by Makefile.common
DIGIKAM_VER=	${PORTVERSION}
DISTINFO_FILE=	${.CURDIR}/distinfo

.include <bsd.port.mk>
